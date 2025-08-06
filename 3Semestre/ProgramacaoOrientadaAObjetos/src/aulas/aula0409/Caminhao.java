package aulas.aula0409;

public class Caminhao extends Veiculo {
	private int capacidadeCarga;

	public Caminhao() {
		
	}

	public Caminhao(String placa) {
		super(placa);
		
	}

	public int getCapacidadeCarga() {
		return capacidadeCarga;
	}

	public void setCapacidadeCarga(int capacidadeCarga) {
		this.capacidadeCarga = capacidadeCarga;
	}
	
	public void frear(int intensidade) {
		super.frear(intensidade / 2); //Mantém o comportamento do método da classe Veiculo, porém, de forma alterada
	}

	public void frear() {
		super.frear(1000);
	}
}
