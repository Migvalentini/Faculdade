package aulas.aula0409;

public abstract class Veiculo { //Abstract protege a classe de não ser instanciada
	private String placa;
	private int velocidade;
	private static final int VELOCIDADEMINIMA = 0;
	
	public Veiculo() {
		
	}
	
	public Veiculo(String placa) {
		this();
		this.placa = placa;
	}

	public String getPlaca() {
		return placa;
	}

	public void setPlaca(String placa) {
		this.placa = placa;
	}

	public int getVelocidade() {
		return velocidade;
	}

	public void setVelocidade(int velocidade) {
		this.velocidade = velocidade;
	}

	public void acelerar(int intensidade) {
		this.velocidade += intensidade;
	}
	
	public void frear(int intensidade) {
		this.velocidade -= Math.abs(intensidade);
		if(this.velocidade < VELOCIDADEMINIMA) {
			this.velocidade = VELOCIDADEMINIMA;
		}
	}
}
