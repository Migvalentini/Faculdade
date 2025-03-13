package aula0312;

import java.util.Scanner;

public class Principal {
	public static void main(String[] args) {
		Aluno a = new Aluno("Joao", 10);
		Aluno b = new Aluno("Joao");
		Aluno c = new Aluno();
		System.out.println("Olá " + a.getNome() + ". Sua Matrícula é " + a.getMatricula() + "!");
		
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Digite seu nome: ");
		String nome = sc.nextLine();
		
		System.out.println("Qual sua matrícula? ");
		int mat = sc.nextInt();
		
		a.setNome(nome);
		a.setMatricula(mat);
		
		System.out.println("Olá " + a.getNome() + ". Sua Matrícula é " + a.getMatricula() + "!");
		
		sc.close();
	}
}
