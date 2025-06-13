package ucs.aula0402.Ex1;

public class Principal {

	public static void main(String[] args) {
		// Verificar se arrays em java podem ser definidos em tempo de execução. Para isso, crie
		// uma classe chamada TesteArray que encapsule um array de inteiros, sem tamanho
		// definido. O construtor desta classe deve receber como parâmetro o tamanho do vetor a
		// ser definido. Depois, escreva uma classe DemoTesteArray que teste a declaração e
		// criação de TesteArray, utilizando um valor teclado como tamanho.

		TesteArray teste = new TesteArray(5);

		System.out.println("Tamanho: " + teste.getInteiros().length);
		
		for(int i=0; i<teste.getInteiros().length; i++) {
			System.out.println(teste.getInteiros()[i]);
		}
	}

}
