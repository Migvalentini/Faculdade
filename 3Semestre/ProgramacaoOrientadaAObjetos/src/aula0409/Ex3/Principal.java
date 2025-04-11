package aula0409.Ex3;

public class Principal {

	public static void main(String[] args) {
		// Crie a classe Imovel, que possui um endereço e um preço.
		// a) Crie uma classe Novo, que herda Imovel e possui um adicional no preço.
		// Crie métodos de acesso e impressão deste valor adicional.
		// b) Crie uma classe Velho, que herda Imovel e possui um desconto no preço.
		// Crie métodos de acesso e impressão para este desconto. 

		Novo n = new Novo("Avenida Brasil", 30000, 10000);
		Velho v = new Velho("Rua João da SIlva", 30000, 10000);
		n.imprimirAdicional();
		v.imprimirDesconto();
	}

}
