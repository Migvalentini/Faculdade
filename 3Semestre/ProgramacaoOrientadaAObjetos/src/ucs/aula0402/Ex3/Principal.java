package ucs.aula0402.Ex3;

import java.util.Scanner;

public class Principal {

	public static void main(String[] args) {
		// Faça um programa que solicite ao usuário o preenchimanto de um vetor de inteiros de
		// 10 posições, depois mostre o vetor preenchido, solicite um número ao usuário e o
		// multiplique pelo vetor (pelo elemento de cada posição). Mostre o vetor modificado.

		Scanner sc = new Scanner(System.in);
		
		Vetor vet = new Vetor(10);
		
		vet.preencheVetor(sc);
		vet.escreveVetor();
		
		System.out.println("\nDigite o multiplicador do vetor: ");
		int multiplicador = sc.nextInt();
		vet.multiplicaVetor(multiplicador);
		
		vet.escreveVetor();
		
		sc.close();
	}

}
