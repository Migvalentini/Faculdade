package ucs.aula0409.Ex2;

public class Ingresso {
	private double valor;
	
	public Ingresso(double valor) {
		this.valor = valor;
	}
	
	public void imprimeValor() {
		System.out.println("O valor do ingresso é " + this.getValor() + " reais");
	}

	public double getValor() {
		return valor;
	}
}
