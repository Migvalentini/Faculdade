package aulas.aula0402;

public class Pessoa {
	private String nome;
	private int peso;
	
	public Pessoa() {

	}
	public Pessoa(String nome, int peso) {
		this.nome = nome;
		this.peso = peso;
	}
	
	public String getNome() {
		return nome;
	}
	public void setNome(String nome) {
		this.nome = nome;
	}
	public int getPeso() {
		return peso;
	}
	public void setPeso(int peso) {
		this.peso = peso;
	}
	
	
}
