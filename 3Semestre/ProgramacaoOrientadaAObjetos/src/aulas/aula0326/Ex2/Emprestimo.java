package aulas.aula0326.Ex2;

import java.util.Date;

public class Emprestimo {
	private Date dataInicio;
    private Date dataDevolucaoPrevista;
    private Date dataDevolucaoRealizada;
    private Livro livro;

    public Emprestimo(Date dataInicio, Date dataDevolucaoPrevista, Date dataDevolucaoRealizada, Livro livro) {
        this.dataInicio = dataInicio;
        this.dataDevolucaoPrevista = dataDevolucaoPrevista;
        this.dataDevolucaoRealizada = dataDevolucaoRealizada;
        this.livro = livro;
    }

	public Date getDataInicio() { return dataInicio; }
	public Date getDataDevolucaoPrevista() { return dataDevolucaoPrevista; }
	public Date getDataDevolucaoRealizada() { return dataDevolucaoRealizada; }
	public Livro getLivro() { return livro; }
}
