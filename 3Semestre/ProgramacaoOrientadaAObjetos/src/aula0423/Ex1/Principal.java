package aula0423.Ex1;

public class Principal {

	public static void main(String[] args) {
		// Crie uma classe pública chamada Matematica, com um construtor privado e
		// funções como soma e subtracao. Essas funções devem aceitar como argumento
		// variáveis do tipo int ou double. Instancie sua classe e faça testes.
		
		System.out.println(Matematica.soma(5, 4));
		System.out.println(Matematica.soma(5.5, 4.2));
		System.out.println(Matematica.soma(5.5, 4));
		System.out.println(Matematica.soma(5, 4.2));
		
		System.out.println(Matematica.subtracao(5, 4));
		System.out.println(Matematica.subtracao(5.5, 4.2));
		System.out.println(Matematica.subtracao(5.5, 4));
		System.out.println(Matematica.subtracao(5, 4.2));
	}

}