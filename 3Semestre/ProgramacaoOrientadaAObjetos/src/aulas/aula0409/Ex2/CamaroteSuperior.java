package aulas.aula0409.Ex2;

public class CamaroteSuperior extends VIP {
	private static final double VALORADICIONAL = 10;
	
	public CamaroteSuperior(double valor) {
		super(valor + VALORADICIONAL);
	}
	
	public double retornaValor() {
		return this.getValor();
	}
}
