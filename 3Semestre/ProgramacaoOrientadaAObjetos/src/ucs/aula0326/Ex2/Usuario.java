package ucs.aula0326.Ex2;

import java.util.List;

public class Usuario {
	private String nome;
    private int id;
    private String email;
    private List<Reserva> livrosReservados;
    private List<Emprestimo> livrosEmprestados;

    public Usuario(String nome, int id, String email, List<Reserva> livrosReservados, List<Emprestimo> livrosEmprestados) {
        this.nome = nome;
        this.id = id;
        this.email = email;
        this.livrosReservados = livrosReservados;
        this.livrosEmprestados = livrosEmprestados;
    }

	public String getNome() { return nome; }
	public int getId() { return id; }
	public String getEmail() { return email; }
	public List<Reserva> getLivrosReservados() { return livrosReservados; }
	public List<Emprestimo> getLivrosEmprestados() { return livrosEmprestados; }
}
