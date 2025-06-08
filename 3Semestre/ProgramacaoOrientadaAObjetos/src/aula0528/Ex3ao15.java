package aula0528;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.LinkedList;
import java.util.List;
import java.util.Random;

public class Ex3ao15 {

	public static void main(String[] args) {
		Ex3ao15 ex3ao15 = new Ex3ao15();
		
		// 3) Escreva um programa que preencha e percorra todos os elementos de um ArrayList de clientes
		ArrayList<Cliente> clientes = new ArrayList<Cliente>();
		Random gerador = new Random();
		
		clientes.add(new Cliente(1, "Miguel", new ArrayList<Telefone>(Arrays.asList(new Telefone("id", "54", "numero"))), 19));
		clientes.add(new Cliente(2, "Luiz", new ArrayList<Telefone>(Arrays.asList(new Telefone("id2", "54", "123456789"))), 24));
		clientes.add(new Cliente(3, "Pedro", new ArrayList<Telefone>(Arrays.asList(new Telefone("id3", "54", "911112222"))), 51));
		clientes.add(new Cliente(4, "Joao", new ArrayList<Telefone>(Arrays.asList(new Telefone("id4", "54", "934343434"))), 32));

		
		ex3ao15.print(clientes, null);
		
		// 4) Escreva um programa para adicionar um cliente na primeira posição da lista
		clientes.add(0, new Cliente(5, "Jorge", new ArrayList<Telefone>(Arrays.asList(new Telefone("id5", "ddd5", "numero5"))), 32));
		
		ex3ao15.print(clientes, null);
		
		// 5) Escreva um programa para remover o terceiro cliente da lista
		clientes.remove(2);
		
		ex3ao15.print(clientes, null);
		
		// 6) Escreva um programa para copiar um arraylist de clientes para outro
		List<Cliente> clientesCopia = new ArrayList<Cliente>();
		clientesCopia.addAll(clientes);
		
		ex3ao15.print(clientesCopia, null);
		
		// 7) Escreva um programa para ordenar o ArrayList de clientes pelo nome
		Collections.sort(clientes);
		
		ex3ao15.print(clientes, null);
		
		// 8) Escreva um programa para randomizar os elementos de um ArrayList de clientes
		List<Cliente> clientesAleatorios = new ArrayList<Cliente>();
		int tamanho = clientes.size();
		
		clientesAleatorios.add(clientes.get(gerador.nextInt(tamanho)));
		clientesAleatorios.add(clientes.get(gerador.nextInt(tamanho)));
		clientesAleatorios.add(clientes.get(gerador.nextInt(tamanho)));
		
		ex3ao15.print(clientesAleatorios, null);
		
		// 9) Escreva um programa para reverter os elementos de um ArrayList de clientes
		Collections.reverse(clientes);
		
		ex3ao15.print(clientes, null);
		
		// 10) Escreva um programa que recupere o maior e o menor elemento de um ArrayList de inteiros exibindo na tela
		ArrayList<Integer> inteiros = new ArrayList<>();
		inteiros.add(4);
		inteiros.add(34);
		inteiros.add(3);
		inteiros.add(12);
		inteiros.add(9);
		
		System.out.println(Collections.max(inteiros));		System.out.println(Collections.min(inteiros));
		System.out.println("-----------------------------------------------------------------");
		
		// 11) Escreva um programa que recupere a posição de um objeto (Cliente) em um ArrayList
		Cliente cliente = new Cliente(4, "Joao", new ArrayList<Telefone>(Arrays.asList(new Telefone("id4", "54", "934343434"))), 32);
		System.out.println(clientes.indexOf(cliente));
		System.out.println("-----------------------------------------------------------------");
		
		// 12) Escreva um programa que calcule a média de idade dos elementos de um ArrayList de clientes
		int soma = 0;
		for (Cliente c : clientes) {
			soma += c.getIdade();
		}
		
		System.out.println(soma / clientes.size());
		System.out.println("-----------------------------------------------------------------");
		
		// 13) Crie uma classe Telefone, com os atributos id, ddd e número, todos do tipo String. 
		// Adapte seu cliente para que o mesmo possa possuir um número indeterminado de telefones.
		
		// 14) Crie um programa que crie dois objetos Cliente, cada um com pelo menos trẽs
		// telefones, e depois liste os nomes de clientes e seus possíveis telefones.
		Cliente c1 = new Cliente(1, "Miguel", new ArrayList<Telefone>(Arrays.asList(new Telefone("id", "54", "numero"), new Telefone("id2", "54", "numero2"), new Telefone("id3", "54", "numero3"))), 19);
		Cliente c2 = new Cliente(2, "Luizao", new ArrayList<Telefone>(Arrays.asList(new Telefone("id4", "54", "numero4"), new Telefone("id5", "54", "numero5"), new Telefone("id6", "54", "numero6"))), 24);
		ex3ao15.print(new ArrayList<Cliente>(Arrays.asList(c1, c2)), null);
		
		// 15) Seguindo o exemplo de medição de tempo constante na classe Exemplo 1, faça um programa que gere e insira aleatoriamente 10000 Clientes em uma ArrayList de clientes. 
		// Repita o processo com uma LinkedList e compare os resultados. 
		// Agora meça o tempo para encontrar o cliente na posição 5670 nas duas listas e compare novamente os resultados. O que se pode deduzir dos resultados?
		ArrayList<Cliente> clientes1 = new ArrayList<Cliente>();
		LinkedList<Cliente> clientes2 = new LinkedList<Cliente>();
		
		for(int x=0; x<10000; x++) {
			clientes1.add(new Cliente(x, "nome" + x , new ArrayList<Telefone>(Arrays.asList(new Telefone("id" + x, "54", "934343434"))), 1));
		}
		//System.out.println(clientes1.get(5670));
		
		for(int x=0; x<10000; x++) {
			clientes2.add(new Cliente(x, "nome" + x , new ArrayList<Telefone>(Arrays.asList(new Telefone("id" + x, "54", "934343434"))), 1));
		}
		System.out.println(clientes2.get(5670));
	}

	private void print(List<Cliente> clientes, Cliente cliente) {
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
