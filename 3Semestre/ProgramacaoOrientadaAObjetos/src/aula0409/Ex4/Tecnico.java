package aula0409.Ex4;

public class Tecnico extends Assistente {
	private double bonusSalarial;
	
	public Tecnico(String nome, String cpf, String rg, double salario, int numeroMatricula, double bonusSalarial) {
		super(nome, cpf, rg, salario, numeroMatricula);
		this.bonusSalarial = bonusSalarial;
	}

	public double getBonusSalarial() {
		return bonusSalarial;
	}

	public void setBonusSalarial(double bonusSalarial) {
		this.bonusSalarial = bonusSalarial;
	}
	
	@Override
	public String toString() {
		return "Nome: " + this.getNome() + "\nCPF: " + this.getCpf() + "\nRG: " + this.getRg() + "\nSalário: " + this.getSalario() + "\nNúmero da Matrícula: " + this.getNumeroMatricula() + "\nBônus Salarial: " + this.getBonusSalarial();
	}
}
