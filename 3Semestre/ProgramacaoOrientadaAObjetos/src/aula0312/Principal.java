package aula0312;

import java.util.Scanner;

public class Principal {
	public static void main(String[] args) {
		Aluno a = new Aluno();
		
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Digite seu nome: ");
		String nome = sc.nextLine();
		
		a.setNome(nome);
		
		System.out.println("Olá " + a.getNome() + "!");
		
		sc.close();
	}
}
