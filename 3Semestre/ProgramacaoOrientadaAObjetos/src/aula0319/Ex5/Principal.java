package aula0319.Ex5;

import java.util.Scanner;

public class Principal {

	public static void main(String[] args) {
		// Faça um programa em java que calcule e mostre a área de um losango. Sabese que: A = (diagonal_maior * diagonal_menor)/2;

		Losango l = new Losango();
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Digite a diagonal maior: ");
		float diagonal_maior = sc.nextFloat();
		l.setDiagonal_maior(diagonal_maior);
		
		System.out.println("Digite a diagonal menor: ");
		float diagonal_menor = sc.nextFloat();
		l.setDiagonal_menor(diagonal_menor);
		
		System.out.println("A área do losango é: " + l.getArea());
		
		
		sc.close();
	}

}
