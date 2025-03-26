package aula0319;

import java.util.Scanner;

public class Ex1Principal {

	public static void main(String[] args) {
		//Uma imobiliária vende apenas terrenos retangulares. 
		//Faça um programa em java para ler as dimensões de um terreno e depois exibir a área do terreno. (lado x altura)
		Ex1Terreno t1 = new Ex1Terreno();
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Digite o lado do terreno: ");
		float lado = sc.nextFloat();
		t1.setLado(lado);
		
		System.out.println("Digite a altura do terreno: ");
		float altura = sc.nextFloat();
		t1.setAltura(altura);
		
		System.out.println("Área: " + t1.getArea());
		
		sc.close();
	}

}
