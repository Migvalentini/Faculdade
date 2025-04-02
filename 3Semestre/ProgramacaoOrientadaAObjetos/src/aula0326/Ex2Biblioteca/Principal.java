package aula0326.Ex2Biblioteca;

import java.util.ArrayList;
import java.util.Date;

public class Principal {

	public static void main(String[] args) {
		// Você foi contratado para desenvolver um sistema de reservas para uma
		// biblioteca municipal. A biblioteca deseja informatizar o processo de reserva e
		// empréstimo de livros, facilitando o acesso dos leitores ao acervo e
		// automatizando o controle de empréstimos. A seguir, é apresentada a descrição
		// do funcionamento da biblioteca:
		// 1. A Biblioteca possui um acervo de livros. Cada livro tem um título, um
		// autor, um ISBN, uma data de publicação, uma categoria e um status que
		// indica se ele está disponível ou emprestado.
		// 2. Os usuários da biblioteca podem se cadastrar para realizar reservas e
		// empréstimos de livros. Cada usuário tem um nome, um número de
		// identificação único, um endereço de e-mail e uma lista de livros que ele
		// reservou ou emprestou.
		// 3. Reservas podem ser feitas pelos usuários para livros que estão
		// atualmente emprestados. Quando um livro reservado é devolvido, o
		// sistema notifica o usuário que fez a reserva, e ele tem um prazo de 3
		// dias para retirar o livro na biblioteca antes que ele se torne disponível
		// para outros usuários.
		// 4. Empréstimos são feitos quando um usuário retira um livro na biblioteca.
		// Um empréstimo tem uma data de início e uma data de devolução
		// prevista. Se o usuário não devolver o livro até a data de devolução, ele é
		// notificado e uma multa diária é aplicada até que o livro seja devolvido.
		// 5. A biblioteca também realiza notificações via e-mail para os usuários.
		// Essas notificações podem ser lembretes de devolução, avisos de multas
		// ou avisos de disponibilidade de livros reservados.

		Livro livro1 = new Livro("O Senhor dos Anéis", "J.R.R. Tolkien", "12345", new Date(), "Fantasia", StatusLivro.DISPONIVEL);
        Usuario usuario1 = new Usuario("Alice", 1, "alice@email.com", new ArrayList<>(), new ArrayList<>());
        Notificacao notificacao1 = new Notificacao(Tipo.DEVOLUCAO);

        System.out.println("Livro criado:");
        System.out.println("Título: " + livro1.getTitulo());
        System.out.println("Autor: " + livro1.getAutor());
        System.out.println("Status: " + livro1.getStatusLivro());
        
        System.out.println("\nUsuário criado:");
        System.out.println("Nome: " + usuario1.getNome());
        System.out.println("ID: " + usuario1.getId());
        System.out.println("Email: " + usuario1.getEmail());
        
        System.out.println("\nNotificação criada:");
        System.out.println("Tipo: " + notificacao1.getTipo());
        System.out.println("Prazo: " + Notificacao.getPrazo() + " dias");
	}

}
