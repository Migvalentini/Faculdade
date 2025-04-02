package aula0326.Ex2Biblioteca;

import java.util.Date;

public class Reserva {
	private Date dataInicio;
    private Livro livro;

    public Reserva(Date dataInicio, Livro livro) {
        this.dataInicio = dataInicio;
        this.livro = livro;
    }

	public Date getDataInicio() { return dataInicio; }
	public Livro getLivro() { return livro; }
}
