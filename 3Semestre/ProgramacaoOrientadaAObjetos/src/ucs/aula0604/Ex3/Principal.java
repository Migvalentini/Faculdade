package ucs.aula0604.Ex3;

import java.util.ArrayList;
import java.util.Scanner;

public class Principal {

	public static void main(String[] args) {
		// Escreva um programa que calcule a média dos elementos de um ArrayList de
		// números Double informados pelo usuário

		Scanner sc = new Scanner(System.in);
		ArrayList<Double> doubles = new ArrayList<>();
		
		String resposta = "s";
		while("s".equals(resposta)) {
			System.out.print("Digite um inteiro: ");
			doubles.add(sc.nextDouble());
			sc.nextLine();
			
			System.out.print("Continuar? ");
			resposta = sc.nextLine();
		}
		
		Double soma = 0.0;
		for (Double double1 : doubles) {
			soma += double1;
		}
		
		System.out.println("Média: " + soma / doubles.size());
		
		sc.close();
	}

}
