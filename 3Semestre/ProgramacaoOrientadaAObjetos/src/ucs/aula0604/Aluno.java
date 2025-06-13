package ucs.aula0604;

public class Aluno implements Comparable<Aluno> {
	private String nome;
	private int codigo;
	
	public Aluno() {
		
	}
	
	public Aluno(int codigo) {
		this.codigo = codigo;
	}
	
	public Aluno(int codigo, String nome) {
		this.codigo = codigo;
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
	public void setCodigo(int codigo) {
		this.codigo = codigo;
	}

	@Override
	public int compareTo(Aluno o) { //determina o critério de ordenação
		//return this.codigo - o.codigo;
		return this.nome.compareTo(o.nome);
	}
	
	
}
