package ucs.aula0402;

public class Principal {

	public static void main(String[] args) {
		Carro c = new Carro("Gol", "IJJ7403", 5, 200);
	
		System.out.println("No " + c.getNome() + " cabem " + c.getCapacidade() + " pessoas");
		if(c.isCheio()) {
			System.out.println("Não tem mais lugares");
		} else {
			System.out.println("No " + c.getNome() + " ainda tem " + c.getVagas() + " vagas");
			
			System.out.println("\nEmbarcando o Zézinho");
			Pessoa p = new Pessoa("Zézinho", 80);
			c.embarca(p);
			
			System.out.println("Agora o carro " + c.getNome() + " tem " + c.getVagas() + " vagas");
			
			System.out.println("\nEmbarcando a Maria");
			p = new Pessoa("Maria", 65);
			c.embarca(p);
			
			System.out.println("Agora o carro " + c.getNome() + " tem " + c.getVagas() + " vagas");
			
			System.out.println("\nEmbarcando o João");
			p = new Pessoa("João", 70);
			c.embarca(p);
			
			System.out.println("Agora o carro " + c.getNome() + " tem " + c.getVagas() + " vagas");
			
			System.out.println("\nEmbarcando o Pedro");
			p = new Pessoa("Pedro", 70);
			c.embarca(p);
			
			System.out.println("Agora o carro " + c.getNome() + " tem " + c.getVagas() + " vagas");
			
			System.out.println("\nEmbarcando o Fred");
			p = new Pessoa("Fred", 70);
			c.embarca(p);
			
			System.out.println("Agora o carro " + c.getNome() + " tem " + c.getVagas() + " vagas");
			
			System.out.println("Lista de Passageiros Antes:");
			System.out.println(c.getListaPassageiros());
			
			System.out.println("Desembarcando o Pedro");
			c.desembarca("Pedro");
			
			System.out.println("\nEmbarcando o Augusto");
			p = new Pessoa("Augusto", 75);
			c.embarca(p);
			
			System.out.println("Agora o carro " + c.getNome() + " tem " + c.getVagas() + " vagas");
			
			System.out.println("Lista de Passageiros Depois:");
			System.out.println(c.getListaPassageiros());
		}
	}

}
