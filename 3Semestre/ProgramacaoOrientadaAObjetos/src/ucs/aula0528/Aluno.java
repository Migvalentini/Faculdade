package ucs.aula0528;

import java.util.Objects;

public class Aluno implements Comparable<Aluno> {
	private int codigo;
	private String nome;
	
	public Aluno() {
		
	}
	
	public Aluno(int codigo, String nome) {
		super();
		this.codigo = codigo;
		this.nome = nome;
	}
	
	public int getCodigo() {
		return codigo;
	}
	
	public void setCodigo(int codigo) {
		this.codigo = codigo;
	}
	
	public String getNome() {
		return nome;
	}
	
	public void setNome(String nome) {
		this.nome = nome;
	}

	@Override
	public String toString() {
		return "Aluno [codigo=" + codigo + ", nome=" + nome + "]";
	}

	@Override
	public int hashCode() {
		return Objects.hash(codigo);
	}

	@Override
	public boolean equals(Object obj) {
		if (this == obj)
			return true;
		if (obj == null)
			return false;
		if (getClass() != obj.getClass())
			return false;
		Aluno other = (Aluno) obj;
		return codigo == other.codigo;
	}
	
	@Override
	public int compareTo(Aluno o) {
		return this.codigo - o.codigo; //ordena por código
		//return this.nome.compareTo(o.nome); //ordena por nome
	}
}
