# Controlador - simples v1

* Entradas:
    * ~~crop: categoria da planta (int, 1 a 3)~~ (unused)
    * t_in: temperatura interna (int, arredondado)
    * time: horário (int, 0 a 23)
* Saídas:
    * heating_on: determina se o aquecedor deve ou não estar ligado
    * cooling_on: determina se o ar condicionado deve ou não estar ligado
    * s: turno do dia (Day ou Night)
    * st: determina se o ambiente precisa ser "aquecido", "resfriado" ou se não deve sofrer alteração