package aula0319.Ex4;

import java.util.Scanner;

public class Principal {

	public static void main(String[] args) {
		// Faça um programa em java que receba o valor do salário mínimo e o valor do salário de um funcionário, 
		// calcule e mostre a quantidade de salários mínimos que ganha esse funcionário.
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Digite o salário: ");
		double salario = sc.nextDouble();
		
		System.out.println("O funcionario recebe " + salario / Salario.getValor() + " salários mínimos");
		
		sc.close();
	}

}
