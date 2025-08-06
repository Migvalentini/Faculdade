package aulas.aula0409.Ex4;

public class Gerente extends Funcionario {
	private static final double VALORAUMENTO = 1.15;
	private String nivelGerencia;

	public Gerente(String nome, String cpf, String rg, double salario, String nivelGerencia) {
		super(nome, cpf, rg, salario);
		this.nivelGerencia = nivelGerencia;
	}
	
	public String getNivelGerencia() {
		return nivelGerencia;
	}

	public void setNivelGerencia(String nivelGerencia) {
		this.nivelGerencia = nivelGerencia;
	}

	@Override
	public void receberAumento() {
		this.setSalario(this.getSalario() * VALORAUMENTO);
	}
	
	@Override
	public String toString() {
		return "Nome: " + this.getNome() + "\nCPF: " + this.getCpf() + "\nRG: " + this.getRg() + "\nSalário: " + this.getSalario() + "\nNível Gerência: " + this.getNivelGerencia();
	}
}
