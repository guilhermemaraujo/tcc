Percentual de tempo em que a temperatura se manteve dentro do intervalo ideal para cada modelo:
- **sem controle**: 21%
- **controle baseado em horário do dia** (*c_time_based_v3*): 31% (para c_freq = 1min,2min,5min,10min)
- **controle baseado na temperatura interna com limitação de atuadores em função do turno** (*c_temperature_based_v3_shift*): 29% (para c_freq = 1min); 31% (para c_freq = - 2min); 32% (para c_freq = 5min,10min)
- **controle baseado na temperatura interna e externa** (*c_temperature_based_v3_t_out*): 30% (1min); 32% (2min,5min,10min)
