package aulas.aula0604.Ex5;

import java.time.Year;
import java.util.HashMap;
import java.util.Scanner;
import java.util.Set;

public class Principal {

	public static void main(String[] args) {
		// Considere uma classe Carro como um conjunto de atributos, entre eles, placa,
		// nome, ano de fabricação e cor.
		// • Crie a classe Carro com os atributos acima, os métodos getters e setters, e toString();
		// • Crie um classe principal que, utilizando um Map, seja capaz de:
		// ◦ Solicitar ao usuário inserir carros
		// ◦ Listar todos os carros;
		// ◦ Listar todos os carros com a cor informada;
		// ◦ Listar a placa do carro mais velho;
		// ◦ Listar a média de idade os carros;
		// ◦ Atualizar os dados de um carro, pesquisando por placa;
		// ◦ Remover os dados de um carro, pesquisando por placa

		Scanner sc = new Scanner(System.in);
		HashMap<Integer, Carro> carros = new HashMap<>();
		
		carros.put(0, new Carro("placa0", "nome0", 2000, "cor0"));
		carros.put(1, new Carro("placa1", "nome1", 2001, "cor1"));
		carros.put(2, new Carro("placa2", "nome2", 2002, "cor2"));
		carros.put(3, new Carro("placa3", "nome3", 2003, "cor3"));
		carros.put(4, new Carro("placa4", "nome4", 2004, "cor4"));
		
		String resposta = "s"; int index = 0;
		  
		while("s".equals(resposta)) {
			System.out.println("Digite a placa do carro: "); 
			String placa = sc.nextLine(); 
			System.out.println("Digite o nome do carro: "); 
			String nome = sc.nextLine(); 
			System.out.println("Digite o ano de fabricação do carro: ");
			int anoFabricacao = sc.nextInt(); 
			sc.nextLine();
			System.out.println("Digite a cor do carro: "); String cor = sc.nextLine();
		 
			Carro carro = new Carro(placa, nome, anoFabricacao, cor);
		 
			carros.put(index++, carro);
		 
			System.out.println("Continuar? s/n ");
			resposta = sc.nextLine(); 
		}
		
		Set<Integer> chaves = carros.keySet();
		for (Integer chave : chaves) {
			System.out.println(chave + " - " + carros.get(chave));
		}
		
		System.out.println("Digite a cor informada: ");
		String corInformada = sc.nextLine();
		
		for (Integer chave : chaves) {
			if(carros.get(chave).getCor().equals(corInformada)) {				
				System.out.println(chave + " - " + carros.get(chave));
			}
		}
		
		Carro carroMaisVelhoCarro = carros.get(0);
		for (Integer chave : chaves) {
			if(carros.get(chave).getAnoFabricacao() < carroMaisVelhoCarro.getAnoFabricacao()) {
				carroMaisVelhoCarro = carros.get(chave);
			}
		}
		System.out.println("Placa do carro mais velho: " + carroMaisVelhoCarro.getPlaca());
		
		int total = 0;
		for (Integer chave : chaves) {
			total += Year.now().getValue() - carros.get(chave).getAnoFabricacao();
		}
		System.out.println("Média: " + total / carros.size());
		
		System.out.println("Digite a placa do carro a ser editado: ");
		String placaInformada = sc.nextLine();
		
		for (Integer chave : chaves) {
			if(carros.get(chave).getPlaca().equals(placaInformada)) {				
				System.out.println("Digite a placa do carro: "); 
				String placa = sc.nextLine(); 
				System.out.println("Digite o nome do carro: "); 
				String nome = sc.nextLine(); 
				System.out.println("Digite o ano de fabricação do carro: ");
				int anoFabricacao = sc.nextInt(); 
				sc.nextLine();
				System.out.println("Digite a cor do carro: "); 
				String cor = sc.nextLine();
				
				carros.get(chave).setPlaca(placa);
				carros.get(chave).setNome(nome);
				carros.get(chave).setAnoFabricacao(anoFabricacao);
				carros.get(chave).setCor(cor);
				
				System.out.println(carros.get(chave));
				break;
			}
		}
		
		System.out.println("Digite a placa do carro a ser excluído: ");
		placaInformada = sc.nextLine();
		
		for (Integer chave : chaves) {
			Carro carro = carros.get(chave);
			if(carro.getPlaca().equals(placaInformada)) {	
				System.out.println(placaInformada + " / " + carro);
				carros.remove(chave);
				break;
			}
		}
		
		for (Integer chave : chaves) {
			System.out.println(chave + " - " + carros.get(chave));
		}
		
		sc.close();
	}

}
