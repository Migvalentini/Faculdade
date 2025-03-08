// Faça uma função que receba uma hora como parâmetro e retorne uma nova estrutura com a hora mais um segundo. 
// O tipo HORA foi criado a partir de uma estrutura que armazena os valores para a hora, minuto e segundo conforme o código a seguir: 
// struct hora {
//     int hora;
//     int minutos;
//     int segundo;
// };
// typedef struct hora HORA;
// A função deve ter o seguinte protótipo:
// HORA adicionaSegundo(HORA horaAtual)
// O programa de teste deve ler 5 horas e retornar, após leitura, a hora com um segundo a mais para cada uma. 
// Hora informada: 12 12 2
// Segundo a mais: 12:12:03
// Hora informada: 23 59 59
// Segundo a mais: 00:00:00
// Hora informada: 14 59 59
// Segundo a mais: 15:00:00
// Hora informada: 15 12 59
// Segundo a mais: 15:13:00
// Hora informada: 8 12 45
// Segundo a mais: 08:12:46

#include <stdio.h>

struct hora {
    int hora;
    int minutos;
    int segundo;
};
typedef struct hora HORA;

HORA adicionaSegundo(HORA horaAtual) {
    int proximo=(horaAtual.hora*3600)+(horaAtual.minutos*60)+horaAtual.segundo+1;
	HORA proximoSegundo=horaAtual;

	proximoSegundo.hora=(proximo/3600) % 24;
	proximo%=3600;
	proximoSegundo.minutos=proximo/60;
	proximoSegundo.segundo=proximo%60;

	return proximoSegundo;
}

int main() {
	HORA hora,h;
	int x;

	for(x=0; x<5; x++) {
		printf("Digite a hora: ");
		scanf("%d %d %d",&hora.hora,&hora.minutos,&hora.segundo);

		h=adicionaSegundo(hora);

		printf("Segundo a mais: %d:%d:%d\n",h.hora,h.minutos,h.segundo);
	}
}