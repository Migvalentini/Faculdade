package ucs.aula0409.Ex1;

public class Cachorro extends Animal {
	public Cachorro(String nome) {
		super(nome);
	}

	public String late() {
		return "O cachorro " + this.getNome() + " latiu";
	}
}
