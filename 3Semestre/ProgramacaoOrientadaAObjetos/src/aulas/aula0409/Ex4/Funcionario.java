package aulas.aula0409.Ex4;

public class Funcionario {
	private static final double VALORAUMENTO = 1.1;
	private String nome;
	private String cpf;
	private String rg;
	private double salario;
	
	public Funcionario(String nome, String cpf, String rg, double salario) {
		this.nome = nome;
		this.cpf = cpf;
		this.rg = rg;
		this.salario = salario;
	}

	public String getNome() {
		return nome;
	}

	public String getCpf() {
		return cpf;
	}

	public String getRg() {
		return rg;
	}

	public double getSalario() {
		return salario;
	}

	public void setSalario(double salario) {
		this.salario = salario;
	}

	public void receberAumento() {
		this.salario *= VALORAUMENTO;
	}
	
	public String toString() {
		return "Nome: " + nome + "\nCPF: " + cpf + "\nRG: " + rg + "\nSalário: " + salario;
	}
}
