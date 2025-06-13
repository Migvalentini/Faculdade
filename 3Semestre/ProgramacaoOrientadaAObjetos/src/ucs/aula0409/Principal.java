package ucs.aula0409;

public class Principal {

	public static void main(String[] args) {
		//Veiculo v1 = new Veiculo(); - Não será possível, pois ela é uma classe abstrata
		
		Carro v = new Carro("ABC1234");
		
		v.acelerar(10);
		v.acelerar(5);
		
		System.out.println("O carro " + v.getPlaca() + " está com a velocidade de " + v.getVelocidade() + "km/h");
		
		System.out.println("----------------");
		
		Onibus o = new Onibus("XYZ5464");
		o.setNumeroPassageiros(50);
		
		o.acelerar(30);
		o.acelerar(20);
		o.frear(25);
		o.frear(50);
		
		System.out.println("O ônibus " + o.getPlaca() + " está com a velocidade de " + o.getVelocidade() + "km/h");
		System.out.println("E carrega " + o.getNumeroPassageiros() + " passageiros");
		
		System.out.println("----------------");
		
		Caminhao c = new Caminhao("FGH4321");
		c.setCapacidadeCarga(5000);
		
		c.acelerar(30);
		c.acelerar(20);
		c.frear(25);
		c.frear();
		
		System.out.println("O caminhão " + c.getPlaca() + " está com a velocidade de " + c.getVelocidade() + "km/h");
		System.out.println("E carrega " + c.getCapacidadeCarga() + " quilos");
	}

}
