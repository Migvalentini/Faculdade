package aulas.aula0409.Ex1;

public class Rica extends Pessoa {
	private double dinheiro;
	
	public Rica(String nome, int idade, double dinheiro) {
		super(nome, idade);
		this.dinheiro = dinheiro;
	}
	
	public void fazCompras() {
		
	}

	public double getDinheiro() {
		return dinheiro;
	}

	public void setDinheiro(double dinheiro) {
		this.dinheiro = dinheiro;
	}
	
	public String toString() {
		return "O rico " + this.getNome() + " possui " + this.getIdade() + " anos e possui " + this.getDinheiro() + " pilas";
	}
}
