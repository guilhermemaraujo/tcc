/* --- Generated the 13/3/2020 at 0:53 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s greenhouse greenhouse.ept --- */

#include <sys/types.h>
#ifndef _WIN32
#include <sys/select.h>
#include <sys/socket.h>
#else
#include <winsock2.h>
#endif
#include <string.h>
#include <microhttpd.h>
#include <stdio.h>
#include <stdlib.h>
#include "_main.h"

#define PORT 8080
#define n 57

Greenhouse__greenhouse_mem mem;
int glob_cnt=0;

struct item
{
    const char *key;
    const char *value;
};

struct item dict[n];

int save_items (void *cls, enum MHD_ValueKind kind, 
                   const char *key, const char *value)
{
  dict[glob_cnt].key = key; 
  dict[glob_cnt].value = value;
  glob_cnt += 1;
  return MHD_YES;
}

static int
answer_to_connection (void *cls, struct MHD_Connection *connection,
                      const char *url, const char *method,
                      const char *version, const char *upload_data,
                      size_t *upload_data_size, void **con_cls)
{
  
  char *json = malloc( 10000 );
  char aux[1];
  struct MHD_Response *response;
  int ret;
  /* input values */
  int crop = 0;
  int t_in = 0;
  int time = 0;
  /* for interator common index */
  int i;  

  MHD_get_connection_values(connection, MHD_GET_ARGUMENT_KIND, &save_items, NULL);
  printf("Counter:%d \n", glob_cnt);
  glob_cnt = 0;
  
  Greenhouse__greenhouse_out _res;

  for (i=0; i < n; i++) {
    if (strcmp(dict[i].key, "crop") == 0)
      crop = atoi(dict[i].value);
    else if (strcmp(dict[i].key, "t_in") == 0)
      t_in = atoi(dict[i].value);
    else if (strcmp(dict[i].key, "time") == 0)
      time = atoi(dict[i].value);
    else
      printf("Not implemented %s\n", dict[i].key);
  }

  for (i=0; i < n; i++)
    printf("%s, %s\n",dict[i].key, dict[i].value);

  Greenhouse__greenhouse_step(crop, t_in, time, &_res, &mem);

  strcat(json,"{");
  strcat(json,"\"heating\":");
  sprintf(aux, "%d", _res.heating_on);
  strcat(json,aux);

  strcat(json,",\"cooling\":");
  sprintf(aux, "%d", _res.cooling_on);
  strcat(json,aux);

  strcat(json,",\"category\":");
  sprintf(aux, "%d", _res.cat);
  strcat(json,aux);

  strcat(json,",\"shift\":");
  sprintf(aux, "%d", _res.s);
  strcat(json,aux);

  strcat(json,",\"checkT\":");
  sprintf(aux, "%d", _res.st);
  strcat(json,aux);

  strcat(json,"}");

  printf("%s\n",json);

  response =
  MHD_create_response_from_buffer (strlen (json), (void *) json, 
             MHD_RESPMEM_PERSISTENT);
  ret = MHD_queue_response (connection, MHD_HTTP_OK, response);
  MHD_destroy_response (response);

  return ret;
}

int main(int argc, char** argv) {
  struct MHD_Daemon *daemon;

  Greenhouse__greenhouse_reset(&mem);
  
  int i;
  for (i=0; i < n; i++) {
    dict[i].key = "";
    dict[i].value = "";
  }

  daemon = MHD_start_daemon (MHD_USE_SELECT_INTERNALLY, PORT, NULL, NULL,
                             &answer_to_connection, NULL, MHD_OPTION_END);

  if (NULL == daemon)
    return 1;

  (void) getchar ();

  MHD_stop_daemon (daemon);
  return 0;
}