package aula0409.Ex1;

public class Pobre extends Pessoa {
	public Pobre(String nome, int idade) {
		super(nome, idade);
	}
	
	public void trabalha() {
		
	}
	
	public String toString() {
		return "O pobre " + this.getNome() + " possui " + this.getIdade() + " anos";
	}
}
