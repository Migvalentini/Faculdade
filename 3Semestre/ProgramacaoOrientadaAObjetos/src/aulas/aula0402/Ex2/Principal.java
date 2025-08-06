package aulas.aula0402.Ex2;

public class Principal {

	public static void main(String[] args) {
		// Um array pode ser passado como argumento a um método. O array, ou a referência
		// para o array? Na classe TesteArray acrescente o método recebeArray que receba um
		// array como argumento e altere o valor de seu primeiro elemento. Na classe
		// DemoTesteArray imprima o array passado para verificar se o primeiro elemento está
		// alterado ou se a modificação ficou local à execução do método.

		TesteArray teste = new TesteArray(5);

		System.out.println("Tamanho: " + teste.getInteiros().length);
		
		int vet[] = {1,2,3,4,5};
		
		System.out.println("Array antes da chamada do método:");
		for(int i=0; i<vet.length; i++) {
			System.out.println(vet[i]);
		}
		
		teste.recebeArray(vet);
		
		System.out.println("Array depois da chamada do método:");
		for(int i=0; i<vet.length; i++) {
			System.out.println(vet[i]);
		}
		
	}

}
