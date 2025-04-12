package aula0409.Ex4;

public class Principal {

	public static void main(String[] args) {
		// Implemente uma classe chamada Funcionario (atributos nome, cpf, rg) e outra
		// classe chamada Gerente (atributo nivelGerencia). A classe Gerente é um
		// Funcionário. Tanto gGerente como Funcionário podem receber aumentos. No
		// entanto, Gerente pode receber aumento de 0,15 e funcionário de 0,10. Implemente
		// um método exibeDados que exibe de forma legível cada atributo do funcionário.
		// a) Crie a classe Assistente, que também é um funcionário, e que possui um
		// número de matrícula (faça o método GET). Sobrescreva o método exibeDados().
		// b) Sabendo que os Assistentes Técnicos possuem um bônus salarial e que
		// os Assistentes Administrativos possuem um turno (dia ou noite) e um adicional
		// noturno, crie as classes Tecnico e Administrativo

		Tecnico a1 = new Tecnico("João da Silva", "34554433", "646534564", 5000, 112, 1200);
		System.out.println(a1.toString());
		
		System.out.println("-----------------------------");
		
		Administrativo a2 = new Administrativo("Ana Mendes", "65418431", "6498431", 5500, "Noite", 784, 1100);
		System.out.println(a2.toString());
	}

}
