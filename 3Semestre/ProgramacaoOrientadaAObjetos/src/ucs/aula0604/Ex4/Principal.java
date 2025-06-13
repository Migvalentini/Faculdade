package ucs.aula0604.Ex4;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

public class Principal {

	public static void main(String[] args) {
		// Implemente um programa que receba um conjunto de números na linha de
		// comando, coloque-os em uma List. Em seguida, utilize a classe Collections para
		// ordenar a lista de forma decrescente através de um Comparator.

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
		
		Collections.sort(inteiros, new Comparator<Integer>() {
			@Override
			public int compare(Integer o1, Integer o2) {
				return o2 - o1;
			}
		});
		
		for (Integer integer : inteiros) {
			System.out.println(integer);
		}
		
		sc.close();
	}

}
