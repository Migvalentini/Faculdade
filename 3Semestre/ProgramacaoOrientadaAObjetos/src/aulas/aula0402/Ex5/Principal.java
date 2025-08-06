package aulas.aula0402.Ex5;

import java.util.ArrayList;
import java.util.Scanner;

public class Principal {

	public static void main(String[] args) {
		// Crie uma classe automóvel que contenha a marca, o nome e a cor do veículo. Depois
		// faça uma classe Principal, e no método main faça o preenchimento do vetor, solicitando
		// os dados dos automóveis para o usuário e armazendando-os em um vetor de automóveis.
		// Por fim, crie um método que retorne um vetor contendo todos os automóveis encontrados
		// com uma cor informada.

		Scanner sc = new Scanner(System.in);
		
		ArrayList<Automovel> automoveis = new ArrayList<>();
		String resposta;
		
		do {
			System.out.println("Digite o nome do carro: ");
			String nome = sc.nextLine();
			
			System.out.println("Digite a marca do carro: ");
			String marca = sc.nextLine();
			
			System.out.println("Digite a cor do carro: ");
			String cor = sc.nextLine();
			
			Automovel automovel = new Automovel(nome, marca, cor);
			
			automoveis.add(automovel);
			
			System.out.println("Deseja continuar? S/N");
			resposta = sc.nextLine();
		} while(resposta.equalsIgnoreCase("s"));
		
		escreveListaAutomoveis(automoveis);
		
		System.out.println("Digite uma cor para filtrar: ");
		String cor = sc.nextLine();
		Automovel[] automoveisPorCor = retornaVetorPorCor(automoveis, cor);
		
		escreveVetorAutomoveis(automoveisPorCor);
		
		sc.close();
	}
	
	public static Automovel[] retornaVetorPorCor(ArrayList<Automovel> automoveis, String cor) {
		int cont = 0;
		
		for(Automovel automovel : automoveis) {
			if(automovel.getCor().equalsIgnoreCase(cor)) {
				cont++;
			}
		}
		
		Automovel resultado[] = new Automovel[cont];
		cont = 0;
		
		for(Automovel automovel : automoveis) {
			if(automovel.getCor().equalsIgnoreCase(cor)) {
				resultado[cont++] = automovel;
			}
		}
		
		return resultado;
	}
	
	public static void escreveListaAutomoveis(ArrayList<Automovel> automoveis) {
		System.out.println("Lista de Automóveis: ");
		for(Automovel automovel : automoveis) {
			System.out.println(automovel.dados());
		}
	}
	
	public static void escreveVetorAutomoveis(Automovel[] automoveis) {
		System.out.println("Vetor de Automóveis: ");
		for(Automovel automovel : automoveis) {
			System.out.println(automovel.dados());
		}
	}

}
