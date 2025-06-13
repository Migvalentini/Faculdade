package ucs.aula0409.Ex1;

public class Gato extends Animal {
	public Gato(String nome) {
		super(nome);
	}

	public String mia() {
		return "O gato " + this.getNome() + " miou";
	}
}
