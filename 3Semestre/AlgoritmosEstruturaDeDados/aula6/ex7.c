//Uma operadora possui uma impressora, compartilhada por seus usuários. 
//Essa impressora tem uma fila de impressão, para a qual os usuários enviam suas solicitações de impressão. 
//Os usuários são classificados em 3 categorias: prioridade máxima (0), prioridade normal (1) e prioridade baixa (2). 
//Para solicitar uma impressão, é utilizada a operação imprime(prioridade, trabalho), e a impressão ocorre através da operação impressao( ). 
//A cada 2 impressões de prioridade máxima, a impressora imprime uma solicitação de prioridade normal. 
//A cada 3 impressões de prioridade normal, a impressora imprime uma impressão de prioridade baixa. Implemente o controle da impressora.