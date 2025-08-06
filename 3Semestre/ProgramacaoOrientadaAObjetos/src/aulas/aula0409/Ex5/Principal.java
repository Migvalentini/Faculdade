package aulas.aula0409.Ex5;

import java.util.Scanner;

import aulas.aula0409.Ex1.*;
import aulas.aula0409.Ex2.*;
import aulas.aula0409.Ex3.*;
import aulas.aula0409.Ex4.*;


public class Principal {

	public static void main(String[] args) {
		// Crie uma classe de Teste com o método main. Neste método:
		// a) Crie um animal do tipo cachorro e faça-o latir. Crie um gato e faça-o miar.
		// Faça os dois animais caminharem.
		// b) Teste (como quiser) as classes Rica, Pobre e Miseravel.
		// c) Crie um ingresso. Peça para o usuário digitar 1 para normal e 2 para VIP.
		// Conforme a escolha do usuário, diga se o ingresso é do tipo normal ou VIP. Se for
		// VIP, peça para ele digitar 1 para camarote superior e 2 para camarote inferior.
		// Conforme a escolha do usuário, diga se que o VIP é camarote superior ou inferior.
		// Imprima o valor do ingresso.
		// d) Crie um imóvel. Peça para o usuário digitar 1 para novo e 2 para velho.
		// Conforme a definição do usuário, imprima o valor final do imóvel.
		// e) Crie um assistente administrativo e um técnico. Imprima o número de
		// matrícula e o nome de cada um deles. 
		
		Scanner sc = new Scanner(System.in);
		
		Cachorro c = new Cachorro("Salsicha");
		Gato g = new Gato("Tigre");
		
		System.out.println(c.late());
		System.out.println(g.mia());
		System.out.println(c.caminha());
		System.out.println(g.caminha());
		
		System.out.println("---------------------");
		
		Rica r = new Rica("Miguel", 19, 2000);
		Pobre p = new Pobre("João", 25);
		Miseravel m = new Miseravel("Pedro", 34);
		
		System.out.println(r.toString());
		System.out.println(p.toString());
		System.out.println(m.toString());
		
		System.out.println("---------------------");
		
		Ingresso i = new Ingresso(150);
		i.imprimeValor();
		System.out.println("Digite 1 para normal e 2 para VIP: ");
		int escolha = sc.nextInt();
		if(escolha == 1) {
			Normal n = new Normal(50);
			n.imprimeNormal();
		} else if(escolha == 2) {
			VIP v = new VIP(50);
			v.imprimeValor();
			System.out.println("Digite 1 para camarote superior e 2 para camarote inferior: ");
			escolha = sc.nextInt();
			if(escolha == 1) {
				CamaroteSuperior cs = new CamaroteSuperior(50);
				cs.imprimeValor();
			} else if(escolha == 2) {
				CamaroteInferior ci = new CamaroteInferior(50);
				ci.imprimeValor();
			}
		} else {
			System.out.println("Escolha Inválida");
		}
		
		System.out.println("---------------------");
		
		Imovel im = new Imovel("Rua João da Silva", 150000);
		im.imprimeValores();
		System.out.println("Digite 1 para novo e 2 para velho: ");
		escolha = sc.nextInt();
		if(escolha == 1) {
			Novo n = new Novo("Rua Central", 150000, 50000);
			n.imprimirAdicional();
		} else if(escolha == 2) {
			Velho v = new Velho("Rua Paralela", 150000, 50000);
			v.imprimirDesconto();
		} else {
			System.out.println("Escolha Inválida");
		}
		
		System.out.println("---------------------");
		
		Administrativo a = new Administrativo("Pedro", "123.456.789-01", "12.345.678-90", 2500, "noite", 23742, 500);
		Tecnico t = new Tecnico("Henrique", "987.654.321-01", "09.876.543-21", 3200, 678, 300);
		System.out.println(a.toString());
		System.out.println();
		System.out.println(t.toString());
		
		sc.close();
	}
}
