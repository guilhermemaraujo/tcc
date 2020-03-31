# Controlador - completo v2

* Entradas:
    * crop: categoria da planta (int, 1 a 3)
    * t_in: temperatura interna (int, arredondado)
    * time: horário (int, 0 a 23)
* Saídas:
    * heating_on: determina se o aquecedor deve ou não estar ligado
    * cooling_on: determina se o ar condicionado deve ou não estar ligado
    * cat: categoria da planta
    * s: turno do dia (Day ou Night)