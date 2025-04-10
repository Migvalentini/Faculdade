package aula0409.Ex1;

public class Miseravel extends Pessoa {
	public Miseravel(String nome, int idade) {
		super(nome, idade);
	}
	
	public void mendiga() {
		
	}
	
	public String toString() {
		return "O miserável " + this.getNome() + " possui " + this.getIdade() + " anos";
	}
}
