package aula0409.Ex2;

public class Principal {

	public static void main(String[] args) {
		// Crie uma classe chamada Ingresso que possui um valor em reais e um método imprimeValor().
		// a) Crie uma classe VIP, que herda Ingresso e possui um valor adicional. 
		// Crie um método que retorne o valor do ingresso VIP (com o adicional incluído).
		// b) Crie uma classe Normal, que herda Ingresso e possui um método que imprime: "Ingresso Normal".
		// c) Crie uma classe CamaroteInferior (que possui a localização do ingresso e métodos para acessar e imprimir esta localização) 
		// e uma classe CamaroteSuperior, que é mais cara (possui valor adicional). 
		// Esta última possui um método para retornar o valor do ingresso. Ambas as classes herdam a classe VIP.

		Ingresso i = new Ingresso(20);
		VIP v = new VIP(20);
		Normal n = new Normal(20);
		
		i.imprimeValor();
		v.imprimeValor();
		n.imprimeNormal();
	}

}
