// Considere um arquivo texto com as notas dos alunos de uma disciplina. 
// Cada linha do arquivo contém a matrícula de um aluno (cadeia de nove caracteres), seguida pelos valores de suas três notas (P1, P2 e P3). 
// Considere ainda que não existem linhas em branco no arquivo. Um exemplo desse formato é mostrado abaixo.
// 9010087-2      2.0     4.3      6.5
// 8820324-3      7.0     8.2      8.5
// 9210478-5      6.0     7.5      7.8
// 9020256-8      3.0     0.5      4.2
// Escreva uma função que receba como parâmetros o número de matrícula de um aluno e o nome de um arquivo com as notas de uma disciplina no formato descrito acima, 
// e retorne a média do aluno na disciplina. A média de um aluno é calculada pela fórmula (P1+P2+P3)/3. 
// Caso o número de matrícula passado como parâmetro não seja encontrado no arquivo, a função deve retornar -1.0. 
// Por exemplo, considerando um arquivo com o conteúdo apresentado acima, sua função deve retornar 7.9 caso o número de matrícula passado como parâmetro seja “8820324-3”. 
// O protótipo da função é dado abaixo. 
// Se não for possível abrir o arquivo de entrada, a função deve imprimir a mensagem “ERRO” e terminar a execução do programa.
// float media (char mat[50], char nome_arquivo[50]);

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float media (char matricula[50], char nomeArquivo[50]) {
    float p1, p2, p3;
    char aluno[10];

    FILE *f = fopen(nomeArquivo, "r");

    if ( f == NULL ){
		printf("Erro ao abrir o arquivo %s\n", nomeArquivo);
		exit(0);
	}   

    while(fscanf(f, "%s %f %f %f", aluno, &p1, &p2, &p3) == 4) {
        if(strcmp(matricula, aluno)==0) {
            return (p1 + p2 + p3)/3;
        }
    }

    fclose(f);
    return -1;
}

int main() {
    char entrada[50] = "../arquivos/entrada2.txt";

    float med = media("8820324-3", entrada);

    printf("Media: %.1f",med);
}
