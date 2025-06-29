package ucs.aula0528;

import java.util.ArrayList;
import java.util.Objects;

public class Cliente implements Comparable<Cliente> {
	private int id;
	private String nome;
	private ArrayList<Telefone> telefone;
	private int idade;
	
	public Cliente(int id, String nome, ArrayList<Telefone> telefone, int idade) {
		super();
		this.id = id;
		this.nome = nome;
		this.telefone = telefone;
		this.idade = idade;
	}
	public int getId() {
		return id;
	}
	public void setId(int id) {
		this.id = id;
	}
	public String getNome() {
		return nome;
	}
	public void setNome(String nome) {
		this.nome = nome;
	}
	public ArrayList<Telefone> getTelefone() {
		return telefone;
	}
	public void setTelefone(ArrayList<Telefone> telefone) {
		this.telefone = telefone;
	}
	public int getIdade() {
		return idade;
	}
	public void setIdade(int idade) {
		this.idade = idade;
	}
	@Override
	public String toString() {
		return "Cliente [id=" + id + ", nome=" + nome + ", telefone=" + telefone + ", idade=" + idade + "]";
	}
	@Override
	public int hashCode() {
		return Objects.hash(id);
	}
	@Override
	public boolean equals(Object obj) {
		if (this == obj)
			return true;
		if (obj == null)
			return false;
		if (getClass() != obj.getClass())
			return false;
		Cliente other = (Cliente) obj;
		return Objects.equals(id, other.id);
	}
	
	@Override
	public int compareTo(Cliente o) {
		return this.nome.compareTo(o.nome);
	}
}
