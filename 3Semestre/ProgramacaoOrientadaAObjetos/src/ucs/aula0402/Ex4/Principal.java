package ucs.aula0402.Ex4;

import java.util.Scanner;

public class Principal {

	public static void main(String[] args) {
		// Refaça o exercício anterior, para uma quantidade incerta de elementos. Ao final de
		// cada número solicitado ao usuário, o programa deve perguntar se o usuário quer
		// continuar fornecendo números. Quando este não quiser mais, apresente o vetor
		// informado, solicite um número, faça a multiplicação deste pelo vetor e apresente o vetor
		// multiplicado.

		Scanner sc = new Scanner(System.in);
		Vetor vet = new Vetor();
		String resposta;
		
		do {
			System.out.println("Digite o valor: ");
			int valor = sc.nextInt();
			vet.adicionar(valor);
			
			System.out.println("Deseja continuar? S/N");
			resposta = sc.next();
		} while (resposta.equalsIgnoreCase("s"));
		
		vet.escreveVetor();
		
		System.out.println("\nDigite o multiplicador do vetor: ");
		int multiplicador = sc.nextInt();
		vet.multiplicaVetor(multiplicador);
		
		vet.escreveVetor();
		
		sc.close();
	}

}
