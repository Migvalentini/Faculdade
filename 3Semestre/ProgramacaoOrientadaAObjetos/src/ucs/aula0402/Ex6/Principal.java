package ucs.aula0402.Ex6;

import java.util.Scanner;

public class Principal {

	public static void main(String[] args) {
		// Crie uma classe Contato que possui dois atributos: nome e email do tipo String. Crie
		// outra classe, chamada Agenda, que possui um atributo contatos do tipo vetor de Contato.
		// A classe Agenda deve conter um método para adicionar um novo contato em uma
		// posição vazia do vetor, outro método para buscar um contato (retorna uma instância de
		// Contato) através do nome e, por fim, um método para excluir um contato através do
		// nome.

		Scanner sc = new Scanner(System.in);
        Agenda agenda = new Agenda(5);

        agenda.adicionarContato(new Contato("Ana", "ana@email.com"));
        agenda.adicionarContato(new Contato("João", "joao@email.com"));
        agenda.adicionarContato(new Contato("Maria", "maria@email.com"));

        agenda.listarContatos();

        System.out.print("\nDigite um nome para buscar: ");
        String nomeBusca = sc.nextLine();
        Contato encontrado = agenda.buscarPorNome(nomeBusca);
        if (encontrado != null) {
            System.out.println("Contato encontrado: " + encontrado);
        } else {
            System.out.println("Contato não encontrado.");
        }

        System.out.print("\nDigite um nome para excluir: ");
        String nomeExclusao = sc.nextLine();
        if (agenda.excluirPorNome(nomeExclusao)) {
            System.out.println("Contato excluído com sucesso.");
        } else {
            System.out.println("Contato não encontrado.");
        }

        System.out.println("\nContatos atualizados:");
        agenda.listarContatos();

        sc.close();
	}
}
