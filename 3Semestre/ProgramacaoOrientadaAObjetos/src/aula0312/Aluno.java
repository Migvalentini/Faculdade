package aula0312;

public class Aluno {
	private String nome;
	private int matricula;
	
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
