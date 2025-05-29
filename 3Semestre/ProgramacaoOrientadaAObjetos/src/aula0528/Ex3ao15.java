package aula0528;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Random;

public class Ex3ao15 {

	public static void main(String[] args) {
		// 3) Escreva um programa que preencha e percorra todos os elementos de um ArrayList de clientes
		List<Cliente> clientes = new ArrayList<Cliente>();
		Random gerador = new Random();
		
		clientes.add(new Cliente(1, "Miguel", "54 987654321", 19));
		clientes.add(new Cliente(2, "Luiz", "54 123456789", 24));
		clientes.add(new Cliente(3, "Pedro", "54 911112222", 51));
		clientes.add(new Cliente(4, "Joao", "54 934343434", 32));
		
		print(clientes, null);
		
		// 4) Escreva um programa para adicionar um cliente na primeira posição da lista
		clientes.add(0, new Cliente(5, "Jorge", "54 987126534", 32));
		
		print(clientes, null);
		
		// 5) Escreva um programa para remover o terceiro cliente da lista
		clientes.remove(2);
		
		print(clientes, null);
		
		// 6) Escreva um programa para copiar um arraylist de clientes para outro
		List<Cliente> clientesCopia = new ArrayList<Cliente>();
		clientesCopia.addAll(clientes);
		
		print(clientesCopia, null);
		
		// 7) Escreva um programa para ordenar o ArrayList de clientes pelo nome
		Collections.sort(clientes);
		
		print(clientes, null);
		
		// 8) Escreva um programa para randomizar os elementos de um ArrayList de clientes
		List<Cliente> clientesAleatorios = new ArrayList<Cliente>();
		int tamanho = clientes.size();
		
		clientesAleatorios.add(clientes.get(gerador.nextInt(tamanho)));
		clientesAleatorios.add(clientes.get(gerador.nextInt(tamanho)));
		clientesAleatorios.add(clientes.get(gerador.nextInt(tamanho)));
		
		print(clientesAleatorios, null);
		
		// 9) Escreva um programa para reverter os elementos de um ArrayList de clientes
		clientes = clientes.reversed();
		
		print(clientes, null);
		
		// 10) Escreva um programa que recupere o maior e o menor elemento de um ArrayList de inteiros exibindo na tela
		
		
		// 11) Escreva um programa que recupere a posição de um objeto (Cliente) em um ArrayList
		System.out.println();
		
		// 12) Escreva um programa que calcule a média de idade dos elementos de um ArrayList de clientes
		// 13) Crie uma classe Telefone, com os atributos id, ddd e número, todos do tipo String. 
		// Adapte seu cliente para que o mesmo possa possuir um número indeterminado de telefones.
		// 14) Crie um programa que crie dois objetos Cliente, cada um com pelo menos trẽs
		// telefones, e depois liste os nomes de clientes e seus possíveis telefones.
		// 15) Seguindo o exemplo de medição de tempo constante na classe Exemplo 1, faça um programa que gere e insira aleatoriamente 10000 Clientes em uma ArrayList de clientes. 
		// Repita o processo com uma LinkedList e compare os resultados. 
		// Agora meça o tempo para encontrar o cliente na posição 5670 nas duas listas e compare novamente os resultados. O que se pode deduzir dos resultados?
	}

	private static void print(List<Cliente> clientes, Cliente cliente) {
		if(clientes.size() > 0) {			
			for(Cliente c : clientes) {
				System.out.println(c);
			}
		}
		if(cliente != null) {
			System.out.println(cliente);
		}
		System.out.println("-----------------------------------------------------------------");
	}
}
