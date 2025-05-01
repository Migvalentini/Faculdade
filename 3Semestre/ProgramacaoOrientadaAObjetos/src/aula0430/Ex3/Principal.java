package aula0430.Ex3;

import java.util.Scanner;

public class Principal {

	public static void main(String[] args) {
		// Faça uma classe chamada ExecString que:
		// • Recebe duas strings do usuário (usar Scanner.nextLine())
		// • Conta e informa quantas vezes a segunda string ocorre dentro da primeira
		// • Informa uma estatística dos caracteres contidos nas 2 strings. (Quantas
		// vezes cada caracter ocorre?

		Scanner sc = new Scanner(System.in);
		System.out.print("Digite a string 1: ");
		String s1 = sc.nextLine();
		
		System.out.print("Digite a string 2: ");
		String s2 = sc.nextLine();
		
		System.out.println("Vezes: " + s1.indexOf(s2));
		
		sc.close();
	}

}
