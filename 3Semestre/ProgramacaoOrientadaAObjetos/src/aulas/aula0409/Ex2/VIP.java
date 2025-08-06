package aulas.aula0409.Ex2;

public class VIP extends Ingresso {
	private static final double VALORADICIONAL = 10;
	
	public VIP(double valor) {
		super(valor + VALORADICIONAL);
	}
	
	public double retornaValor() {
		return this.getValor();
	}
}
