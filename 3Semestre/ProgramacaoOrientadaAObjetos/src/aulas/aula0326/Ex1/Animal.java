package aulas.aula0326.Ex1;

public class Animal {
	private String nome;
	private String especie;
	private String raca;
	private int idade;
	private int id;
	private Cliente dono;
	
	public Animal(String nome, String especie, String raca, int idade, int id, Cliente dono) {
		this.nome = nome;
		this.especie = especie;
		this.raca = raca;
		this.idade = idade;
		this.id = id;
		this.dono = dono;
	}
	
	public String getNome() {
		return nome;
	}
	public void setNome(String nome) {
		this.nome = nome;
	}
	public String getEspecie() {
		return especie;
	}
	public void setEspecie(String especie) {
		this.especie = especie;
	}
	public String getRaca() {
		return raca;
	}
	public void setRaca(String raca) {
		this.raca = raca;
	}
	public int getIdade() {
		return idade;
	}
	public void setIdade(int idade) {
		this.idade = idade;
	}
	public int getId() {
		return id;
	}
	public void setId(int id) {
		this.id = id;
	}
	public Cliente getDono() {
		return dono;
	}
	public void setDono(Cliente dono) {
		this.dono = dono;
	}
	
}
