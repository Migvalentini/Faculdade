package ucs.aula0528;

import java.util.ArrayList;
import java.util.List;

public class Ex1 {

	public static void main(String[] args) {
		// Escreva um programa em Java que crie um ArrayList adicione algumas cores (String) e as imprima na tela;
		
		List<Cor> cores = new ArrayList<Cor>();
		
		cores.add(new Cor("Branco"));
		cores.add(new Cor("Azul"));
		cores.add(new Cor("Vermelho"));
		cores.add(new Cor("Laranja"));
		cores.add(new Cor("Verde"));
		cores.add(new Cor("Preto"));
		
		for(Cor cor : cores) {
			System.out.println(cor);
		}
	}
}
