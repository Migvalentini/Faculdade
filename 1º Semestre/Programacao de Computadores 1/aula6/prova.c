#include <stdio.h>
#include <stdlib.h>

void q1() {
	//Este programa foi construído considerando um isbn considerando 10 dígitos
	int isbn,resto,d1,d2,d3,d4,d5;
	printf("Informe o numero do ISBN: ");
	scanf("%d",&isbn);
	// identificacao do GTIN 4o e 5o digitos
	d1=isbn/1000000000;
	resto=isbn%1000000000;
	d2=resto/100000000;
	resto=resto%100000000;
	d3=resto/10000000;
	resto=resto%10000000;
	d4=resto/1000000;
	resto=resto%1000000;
	d5=resto/100000;
	printf ("\nNumero do GTIN: %d\n",d4*10+d5);
}


void q2() {
	int cod_liv,cond_pgto,qtd,desc=0;
	float vlr=0,tot=0;
	printf("Digite o codigo do livro:\n");
	scanf("%d",&cod_liv);
	printf("Digite a condicao de pagamento:\n");
	scanf("%d",&cond_pgto);
	printf("Digite a quantidade de livros:\n");
	scanf("%d",&qtd);
	//Cod   Título do Livro                                   Valor   
    //1     A Theory of Fun for Game Design                   R$ 120,00
    //2     Tomb Raider – Os dez mil imortais                 R$ 59,21
    //3     Getting Gamers: The Psychology of Video Games     R$  158,31
    //4     Masters of Doom                                   R$ 59,21
    //5     Women in Game Development: Breaking the Glass     R$ 145,50
    //6     Uncharted – O quarto labirinto                    R$ 145,50
	if (cod_liv==1)
		vlr=120;
	if (cod_liv==2||cod_liv==4)
		vlr=59.21;
	if (cod_liv==3)
		vlr=158.31;
	if (cod_liv==5||cod_liv==6)
		vlr=145.5;
	

	//Quantidade      % Desconto    %Acrescimo
	//1                   5%
	//2                                 15%
	//3                                 30%
	if (vlr>0){
		tot=qtd*vlr;
		if (cond_pgto==1)
			tot=tot*0.95;
		if (cond_pgto==2)
			tot=tot*1.15;
		if (cond_pgto==3)
			tot=tot*1.30;
		//Se a quantidade de livros for maior que 15, concede mais de 20% de desconto
		if (qtd>15)
			tot=tot*0.8;
		if (cond_pgto>=1&&cond_pgto<=3)
			printf("\nValor total: %.2f: \n",tot);
		else 
			printf("\nCodigo de pagamento invalido!\n");
		}
	else
		printf("\nCodigo do livro invalido!\n");
			
}
	
	
void q3() {
	int h1,h2,h3,m1,m2,m3,aux;
	printf ("Informe a primeira hora e minuto: ");
	scanf("%d%d",&h1,&m1);
	printf ("Informe a segunda hora e minuto: ");
	scanf("%d%d",&h2,&m2);
	printf ("Informe a terceira hora e minuto: ");
	scanf("%d%d",&h3,&m3);
	h1=h1*60+m1;
	h2=h2*60+m2;
	h3=h3*60+m3;
	if (h1<h2){
		aux=h1;
		h1=h2;
		h2=aux;
		aux=m1;
		m1=m2;
		m2=aux;		
	}
	if (h1<h3){
		aux=h1;
		h1=h3;
		h3=aux;
		aux=m1;
		m1=m3;
		m3=aux;		
	}
	if (h2<h3){
		aux=h2;
		h2=h3;
		h3=aux;
		aux=m2;
		m2=m3;
		m3=aux;		
	}
	m1=h1%60;
	h1=h1/60;
	m2=h2%60;
	h2=h2/60;
	m3=h3%60;
	h3=h3/60;
	printf("\nHorarios em ordem decrescente: %d:%d, %d:%d, %d:%d\n",h1,m1,h2,m2,h3,m3);
	
}

int main()
{

    int opcao;
    printf("------------------------------------\n");
    printf("Selecione o exercicio para executar:\n");
    printf("------------------------------------\n");
    printf("1) Questao 1\n");
    printf("2) Questao 2\n");
    printf("3) Questao 3\n");
    printf("------------------------------------\n");
    printf("Qual sua opcao?\n");
    printf("------------------------------------\n");
    scanf("%d",&opcao);

    switch(opcao) {
        case 1 :
            q1();
            break;
        case 2 :
            q2();
            break;
        case 3 :
            q3();
            break;
        default :
            printf("Codigo nao encontrado!\n");
            break;
    }
    return 0;
}