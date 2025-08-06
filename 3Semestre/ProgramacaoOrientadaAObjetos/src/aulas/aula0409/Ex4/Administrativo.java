package aulas.aula0409.Ex4;

public class Administrativo extends Assistente {
	private double adicionalNoturno;
	private String turno;
	
	public Administrativo(String nome, String cpf, String rg, double salario, String turno, int numeroMatricula, double adicionalNoturno) {
		super(nome, cpf, rg, salario, numeroMatricula);
		this.adicionalNoturno = adicionalNoturno;
		this.turno = turno;
	}

	public double getAdicionalNoturno() {
		return adicionalNoturno;
	}

	public String getTurno() {
		return turno;
	}
	
	@Override
	public String toString() {
		return "Nome: " + this.getNome() + "\nCPF: " + this.getCpf() + "\nRG: " + this.getRg() + "\nSalário: " + this.getSalario() + "\nNúmero da Matrícula: " + this.getNumeroMatricula() + "\nAdicional Noturno: " + this.getAdicionalNoturno() + "\nTurno: " + this.getTurno();
	}
}
