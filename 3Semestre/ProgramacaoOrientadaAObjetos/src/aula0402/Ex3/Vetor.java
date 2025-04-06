package aula0402.Ex3;

import java.util.Scanner;

public class Vetor {
	private int vetor[];
	
	public Vetor(int tamanho) {
		this.vetor = new int[tamanho];
	}
	
	public void preencheVetor(Scanner sc) {
		System.out.println("Preencha o vetor de " + this.vetor.length + " posições");
		for(int i=0; i<this.vetor.length; i++) {
			this.vetor[i] = sc.nextInt();
		}
	}
	
	public void escreveVetor() {
		System.out.println("Vetor: ");
		for(int i=0; i<this.vetor.length; i++) {
			System.out.print(this.vetor[i] + " ");
		}
	}
	
	public void multiplicaVetor(int multiplicador) {
		for(int i=0; i<this.vetor.length; i++) {
			this.vetor[i] *= multiplicador;
		}
	}
}