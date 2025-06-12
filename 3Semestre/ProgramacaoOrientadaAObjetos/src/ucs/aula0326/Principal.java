package ucs.aula0326;

import java.util.Scanner;

public class Principal {

	public static void main(String[] args) {
		Terreno t1 = new Terreno();
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Digite o lado do terreno: ");
		float lado = sc.nextFloat();
		t1.setLado(lado);
		
		System.out.println("Digite a altura do terreno: ");
		float altura = sc.nextFloat();
		t1.setAltura(altura);
		
		System.out.println("Digite o preço do metro2: ");
		float precom2 = sc.nextFloat();
		t1.setPrecom2(precom2);
		
		sc.nextLine();
		
		System.out.println("Quer informar o endereco do terreno? S/N ");
		String resposta = sc.nextLine();
		
		if("S".equals(resposta) || "s".equals(resposta)) {
			Endereco end = new Endereco();
			t1.setEndereco(end);
			
			System.out.println("Digite a rua: ");
			resposta = sc.nextLine();
			end.setRua(resposta);
		}
		
		System.out.println("Quer informar o dono do terreno? S/N ");
		resposta = sc.nextLine();
		
		if("S".equals(resposta) || "s".equals(resposta)) {
			Pessoa pessoa = new Pessoa();
			t1.setDono(pessoa);
			
			System.out.println("Digite o nome: ");
			resposta = sc.nextLine();
			pessoa.setNome(resposta);
			
			System.out.println("Quer informar o endereco do dono? S/N ");
			resposta = sc.nextLine();
			if("S".equals(resposta) || "s".equals(resposta)) {
				Endereco end = new Endereco();
				pessoa.setEndereco(end);
				
				System.out.println("Digite a rua: ");
				resposta = sc.nextLine();
				end.setRua(resposta);
			}
		}
		
		System.out.println("Área: " + t1.getArea());
		System.out.println("Valor: " + t1.getPrecom2());
		
		if(t1.getEndereco() != null) {
			System.out.println("O terreno fica na rua: " + t1.getEndereco().getRua());
		}
		
		if(t1.getDono() != null) {
			System.out.println("O dono se chama: " + t1.getDono().getNome());
			System.out.println("O dono mora na rua: " + t1.getEndereco().getRua());
		}
		
		sc.close();
	}

}
