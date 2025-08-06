package aulas.aula0528;

public class Cor {
	private String nome;

	public Cor(String nome) {
		this.nome = nome;
	}

	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	@Override
	public String toString() {
		return "Cor [nome=" + nome + "]";
	}
}
