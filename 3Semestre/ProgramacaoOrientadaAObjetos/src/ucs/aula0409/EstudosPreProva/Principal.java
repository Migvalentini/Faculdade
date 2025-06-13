package ucs.aula0409.EstudosPreProva;

public class Principal {

	public static void main(String[] args) {
		// Sistema de Empréstimo de Livros em Biblioteca
		// A biblioteca comunitária de um bairro possui livros físicos e eBooks disponíveis para empréstimo. 
		// Cada leitor pode levar um número limitado de livros e só pode carregar uma quantidade máxima de peso. 
		// Os eBooks não pesam, mas ocupam espaço por causa da concentração necessária para ler arquivos digitais muito grandes.

		// Na biblioteca, o leitor Ana possui limite de 3 livros no total e pode carregar até 400 gramas ou 100 MB, considerando o tipo do livro.

		// Ana tenta pegar alguns livros do acervo:
		// "Dom Casmurro", físico, 180g, capa dura
		// "Memórias Póstumas", físico, 200g, brochura
		// "O Alienista", eBook, 80MB
		// "Capitães da Areia", eBook, 120MB
		
		// Conforme Ana tenta pegar os livros, o sistema informa se a operação foi bem-sucedida ou não, de acordo com:
		// o número total de livros que ela já pegou
		// se o livro é físico: o peso não pode ultrapassar 400g no total
		// se o livro é eBook: o total em MB não pode ultrapassar 100MB

		// Após os empréstimos:
		// Exibe a lista dos livros que Ana pegou com um resumo de cada (título, tipo, peso/MB, autor, etc.).
		// Ana devolve “Dom Casmurro”.
		// Tenta pegar outro livro.
		// O sistema exibe novamente a lista final de livros com ela e quantos ainda pode pegar.
		
		LivroFisico dom = new LivroFisico("Dom Casmurro", 180, "capa dura");
		LivroFisico mem = new LivroFisico("Memórias Póstumas", 200, "brochura");
		LivroEBook ali = new LivroEBook("O Alienista", 80);
		LivroEBook cap = new LivroEBook("Capitães da Areia", 120);
		
		Leitor ana = new Leitor("Ana", 3, 400, 100);
		ana.pegarLivro(dom);
		ana.pegarLivro(mem);
		ana.pegarLivro(ali);
		ana.pegarLivro(cap);
		System.out.println();
		ana.listarLivros();
		System.out.println();
		ana.devolverLivro("Dom Casmurro");
		ana.pegarLivro(cap);
		ana.listarLivros();
	}

}
