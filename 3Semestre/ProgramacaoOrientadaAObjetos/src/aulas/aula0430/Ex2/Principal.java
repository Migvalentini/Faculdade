package aulas.aula0430.Ex2;

import java.util.Scanner;

public class Principal {

	public static void main(String[] args) {
		// Escreva um programa que dado um valor numérico digitado pelo usuário
		// (armazenado em uma variável inteira), imprima cada um dos seus dígitos por extenso. 
		// Faça isso utilizando concatenação de Strings
		// Exemplo: 
		// Entre o número: 4571
		// Resultado: quatro, cinco, sete, um
		
		Scanner sc = new Scanner(System.in);
		System.out.print("Digite um número: ");
		int num = sc.nextInt();
		
		String s = "" + num;
		s = s.replaceAll("[0]", "zero ");
		s = s.replaceAll("[1]", "um ");
		s = s.replaceAll("[2]", "dois ");
		s = s.replaceAll("[3]", "tres ");
		s = s.replaceAll("[4]", "quatro ");
		s = s.replaceAll("[5]", "cinco ");
		s = s.replaceAll("[6]", "seis ");
		s = s.replaceAll("[7]", "sete ");
		s = s.replaceAll("[8]", "oito ");
		s = s.replaceAll("[9]", "nove ");
		
		System.out.println(s);
		
		sc.close();
	}

}
