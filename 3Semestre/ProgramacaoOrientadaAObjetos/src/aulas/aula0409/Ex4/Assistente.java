package aulas.aula0409.Ex4;

public class Assistente extends Funcionario {
	private int numeroMatricula;

	public Assistente(String nome, String cpf, String rg, double salario, int numeroMatricula) {
		super(nome, cpf, rg, salario);
		this.numeroMatricula = numeroMatricula;
	}

	public int getNumeroMatricula() {
		return numeroMatricula;
	}
	
	@Override
	public String toString() {
		return "Nome: " + this.getNome() + "\nCPF: " + this.getCpf() + "\nRG: " + this.getRg() + "\nSalário: " + this.getSalario() + "\nNúmero da Matrícula: " + this.getNumeroMatricula();
	}
}
