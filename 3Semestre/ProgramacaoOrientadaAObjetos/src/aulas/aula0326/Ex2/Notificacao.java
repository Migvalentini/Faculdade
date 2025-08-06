package aulas.aula0326.Ex2;

public class Notificacao {
	private static final int PRAZO = 3;
	private Tipo tipo;

    public Notificacao(Tipo tipo) {
        this.tipo = tipo;
    }

	public static int getPrazo() { return PRAZO; }
	public Tipo getTipo() { return tipo; }
}

enum Tipo {
	DEVOLUCAO, MULTAS, DISPONIBILIDADE
}