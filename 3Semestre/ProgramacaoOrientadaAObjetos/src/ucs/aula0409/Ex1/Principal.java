package ucs.aula0409.Ex1;

public class Principal {
	public static void main(String[] args) {
		// Crie um novo projeto chamado Heranca. Nele, crie classes Java para que
		// implementem as classes descritas pelo diagrama a seguir (Todas as classes
		// devem ter definidos seus métodos setters/getters):
		
		Cachorro c = new Cachorro("Max");
		c.setRaca("Salsicha");
		Gato g = new Gato("Mingau");
		g.setRaca("Siamês");

		System.out.println("O cachorro " + c.getNome() + " tem raça " + c.getRaca());		
		System.out.println("O gato " + g.getNome() + " tem raça " + g.getRaca());
		System.out.println(c.caminha());
		System.out.println(g.caminha());
		System.out.println(c.late());
		System.out.println(g.mia());
		
		System.out.println("--------------------");
		
		Rica r = new Rica("Miguel", 19, 2000.0);
		Pobre p = new Pobre("João", 10);
		Miseravel m = new Miseravel("Pedro", 35);
		
		System.out.println(r.toString());
		System.out.println(p.toString());
		System.out.println(m.toString());
	}
}
