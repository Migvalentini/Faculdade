package aula0319.Ex6;

import java.util.Scanner;

public class Principal {

	public static void main(String[] args) {
		// Escreva um programa em java para ler o nome e a idade de uma pessoa, e
		// exibir quantos dias de vida ela possui. Considere sempre anos completos, e que
		// um ano possui 365 dias. Ex: uma pessoa com 19 anos possui 6935 dias de vida;
		// veja um exemplo de saída: MARIA, VOCÊ JÁ VIVEU 6935 DIAS

		Pessoa p = new Pessoa();
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Digite o nome da pessoa: ");
		String nome = sc.nextLine();
		p.setNome(nome);
		
		System.out.println("Digite a idade da pessoa: ");
		int idade = sc.nextInt();
		p.setIdade(idade);
		
		System.out.println(p.getNome() + ", você já viveu " + p.getAnos() + " anos");
		
		sc.close();
	}

}
