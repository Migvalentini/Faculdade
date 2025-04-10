package aula0409.Ex2;

public class VIP extends Ingresso {
	private static final double VALORADICIONAL = 10;
	
	public VIP(double valor) {
		super(valor + VALORADICIONAL);
	}
	
	@Override
	public void imprimeValor() {
		System.out.println("O valor do ingresso é " + this.getValor() + " reais");
	}
}
