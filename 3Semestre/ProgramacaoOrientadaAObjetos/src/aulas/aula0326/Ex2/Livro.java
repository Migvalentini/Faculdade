package aulas.aula0326.Ex2;

import java.util.Date;

public class Livro {
	private String titulo;
	private String autor;
	private String isbn;
	private Date datapublicacao;
	private String categoria;
	private StatusLivro status;
	
	public Livro(String titulo, String autor, String isbn, Date datapublicacao, String categoria, StatusLivro status) {
		this.titulo = titulo;
		this.autor = autor;
		this.isbn = isbn;
		this.datapublicacao = datapublicacao;
		this.categoria = categoria;
		this.status = (StatusLivro) status;
	}

	public String getTitulo() { return titulo; }
	public String getAutor() { return autor; }
	public String getIsbn() { return isbn; }
	public Date getDatapublicacao() { return datapublicacao; }
	public String getCategoria() { return categoria; }
	public StatusLivro getStatusLivro() { return status; }
}

enum StatusLivro {
    DISPONIVEL, EMPRESTADO, RESERVADO
}