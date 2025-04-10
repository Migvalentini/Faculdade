package aula0409;

public class Onibus extends Veiculo { //HERANÇA
	private int numeroPassageiros;
	
	public Onibus() {
		super(); //Ao criar um ônibus, será chamado o construtor de Veiculo 
	}
	
	public Onibus(String placa) {
		super(placa); //Ao criar um ônibus, será chamado o construtor de Veiculo que recebe a placa
	}

	public int getNumeroPassageiros() {
		return numeroPassageiros;
	}

	public void setNumeroPassageiros(int numeroPassageiros) {
		this.numeroPassageiros = numeroPassageiros;
	}
	
	
}
