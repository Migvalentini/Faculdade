package ucs.aula0319.Ex2;

import java.util.Scanner;

public class Principal {

	public static void main(String[] args) {
		//Faça um programa em java para calcular quantas ferraduras são necessárias para equipar todos os cavalos comprados para um haras. 
		//A informação de cavalos comprados deve ser informada pelo usuário.
		Cavalo c1 = new Cavalo();
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Digite a quantidade de cavalos: ");
		int cavalos = sc.nextInt();

		System.out.println("Quantidade de Ferraduras: " + c1.calculaFerraduras(cavalos));
		
		sc.close();
	}

}
