package aulas.aula0402.Ex4;

import java.util.ArrayList;

public class Vetor {
	private ArrayList<Integer> elementos;
	
	public Vetor() {
		elementos = new ArrayList<>();
	}
	
	public void adicionar(int valor) {
		elementos.add(valor);
	}
	
	public void escreveVetor() {
		System.out.println("Vetor: ");
		for(int e : elementos) {
			System.out.print(e + " ");
		}
	}
	
	public void multiplicaVetor(int multiplicador) {
		for(int i=0; i<this.elementos.size(); i++) {
			elementos.set(i, elementos.get(i) * multiplicador);
		}
	}
}