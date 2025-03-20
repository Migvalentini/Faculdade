package aula0319;

import java.util.Scanner;

public class Ex3Principal {

	public static void main(String[] args) {
		//Faça um programa em java que receba o valor dos catetos a e b de um triângulo, calcule e mostre o valor da hipotenusa. 
		Ex3Triangulo t = new Ex3Triangulo();
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Digite o cateto A: ");
		int catetoA = sc.nextInt();
		t.setCatetoA(catetoA);
		System.out.println("Digite o cateto B: ");
		int catetoB = sc.nextInt();
		t.setCatetoB(catetoB);
		
		System.out.println("Hipotenusa: " + t.getHipotenusa());
		
		sc.close();
	}

}
