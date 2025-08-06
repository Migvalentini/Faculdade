package aulas.aula0604.Ex2;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class Principal {

	public static void main(String[] args) {
		// Escreva um programa que recupere o maior e o menor elemento de um ArrayList de inteiros informados pelo usuário.
		
		Scanner sc = new Scanner(System.in);
		ArrayList<Integer> inteiros = new ArrayList<>();
		
		String resposta = "s";
		while("s".equals(resposta)) {
			System.out.print("Digite um inteiro: ");
			inteiros.add(sc.nextInt());
			sc.nextLine();
			
			System.out.print("Continuar? ");
			resposta = sc.nextLine();
		}
		
		System.out.println("Maior: " + Collections.max(inteiros));
		System.out.println("Menor: " + Collections.min(inteiros));
		
		sc.close();
	}

}
