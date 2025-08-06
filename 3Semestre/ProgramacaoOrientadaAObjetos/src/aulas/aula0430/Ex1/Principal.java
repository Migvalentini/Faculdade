package aulas.aula0430.Ex1;

import java.util.Scanner;

public class Principal {

	public static void main(String[] args) {
		// 1) Faça um programa em Java que, a partir de uma string digitada (Scanner.next()) pelo usuário, imprima:
		// a) O número de caracteres da string.
		// b) A string com todas suas letras em maiúsculo.
		// c) O número de vogais da string.
		// d) Se a string digitada começa com “UNI” (ignorando maiúsculas/minúsculas).
		// e) Se a string digitada termina com “SUL” (ignorando maiúsculas/minúsculas).
		// f) O número de dígitos (0 a 9) contidos na string.
		// g) Se a string é um palíndromo ou não.
		
		Scanner sc = new Scanner(System.in);
		System.out.print("Digite a string: ");
		String s = sc.next();
		
		System.out.println("Tamanho: " + s.length());
		System.out.println("Maiúsculo: " + s.toUpperCase());
		System.out.println("Vogais: " + s.replaceAll("[^aeiouAEIOU]","").length());
		System.out.println("Inicia com UNI: " + s.startsWith("UNI"));
		System.out.println("Termina com SUL: " + s.endsWith("SUL"));
		System.out.println("Total de Números: " + s.replaceAll("[^0123456789]", "").length());
		StringBuilder res = new StringBuilder();
        res.append(s);
        res.reverse();
		System.out.println("Palíndromo: " + s.equals(res.toString()));
		
		sc.close();	
	}

}
