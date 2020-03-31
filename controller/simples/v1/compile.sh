TARGETDIR="greenhouse"
rm $TARGETDIR"_sim"
rm $TARGETDIR"_c"/_main.c
cp server.c $TARGETDIR"_c"/_main.c
gcc -I $TARGETDIR"_controller_c" -I /usr/local/lib/heptagon/c -c -o $TARGETDIR"_c"/_main.o $TARGETDIR"_c"/_main.c -lm
gcc -o $TARGETDIR"_sim" $TARGETDIR"_c"/_main.o $TARGETDIR"_c"/$TARGETDIR.o /usr/lib/x86_64-linux-gnu/libmicrohttpd.so $TARGETDIR"_controller_c"/$TARGETDIR"_controller.o" -lm
