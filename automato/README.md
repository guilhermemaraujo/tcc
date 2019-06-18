# Automato

* Entradas:
    * t_in: temperatura interna (int, arredondado)
    * time: horário (int, 0 a 23)
    * d: se deve operar no modo "default" (bool)
* Saídas:
    * heating_on: determina se o aquecedor deve ou não estar ligado
    * cooling_on: determina se o ar condicionado deve ou não estar ligado
* Estados: O aparelho inicia desligado no estado de Idle e transita entre os estados de acordo com o horário e a temperatura do ambiente. Cada estado tem um range de horário e uma temperatura máxima e uma mínima. Não há transições dos estados entre si, apenas do Idle com todos os outros.
    * Idle: aparelho desligado.
    * Dawn: aparelho ligado. Volta ao estado de Idle caso saia do range de seu horário [0h às 8h[ ou caso atinja o range da temperatura, com mínima de 20 graus e máxima de 25
    * Morning: Mesmo que o anterior. Range de seu horário [8h às 12h[. Min: 15, Max: 20
    * Afternoon: Mesmo que o anterior. Range de seu horário [12h às 17h[. Min: 10, Max: 15
    * Night: Mesmo que o anterior. Range de seu horário [17h às 00h[. Min: 25, Max: 30
    * Default: entra nesse estado apenas se for enviado a entrada "d" como true. É um modo que determina um range de temperatura entre 15 e 25 graus independente do horário.

Obs.: caso d seja True, há trânsito apenas entre os estados de Idle e Default.

Cenário: local com dias quentes e noites mais frias