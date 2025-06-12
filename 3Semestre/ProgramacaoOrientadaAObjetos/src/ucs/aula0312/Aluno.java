package ucs.aula0312;

public class Aluno {
	private String nome;
	private int matricula;
	
	public Aluno() { //Método Construtor Sem Nome e Matrícula
		
	}
	
	public Aluno(String nome) { //Método Construtor Sem Matrícula
		this.nome = nome;
	}
	
	public Aluno(String nome, int matricula) { //Método Construtor Completo
		this.nome = nome;
		this.matricula = matricula;
	}
	
	public void setNome(String nome) {
		if(nome == null || nome.length() == 0) {
			System.out.println("O nome não pode ser nulo");
		} else {			
			this.nome = nome;
		}
	}
	
	public String getNome() {
		return this.nome;
	}

	public int getMatricula() {
		return matricula;
	}

	public void setMatricula(int matricula) {
		this.matricula = matricula;
	}
	
	
}
