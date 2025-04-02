package aula0319.Ex6;

public class Pessoa {
	private static final int DIASANO = 365;
	private String nome;
	
	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	private int idade;
	
	public void setIdade(int idade) {
		this.idade = idade;
	}
	
	public int getAnos() {
		return Pessoa.DIASANO * this.idade;
	}
}
