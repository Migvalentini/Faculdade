package aula0423;

public class Aluno {
	private static int ultimoCodigo = 1;
	private int codigo;
	private String nome;
	
	
	public Aluno() {
		this.codigo = ultimoCodigo++;
	}

	public Aluno(String nome) {
		this(); //serve para criar uma nova instância, sem repetir o código
		this.nome = nome;
	}

	public String getNome() {
		return nome;
	}


	public void setNome(String nome) {
		this.nome = nome;
	}


	public int getCodigo() {
		return codigo;
	}
	
	public static int getUltimoCodigo() {
		return ultimoCodigo;
	}
	
	@Override
	public String toString() {
		return "Aluno " + this.codigo + " : " + this.nome;
	}
}
