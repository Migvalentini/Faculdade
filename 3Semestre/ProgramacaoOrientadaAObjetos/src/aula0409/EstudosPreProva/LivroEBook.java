package aula0409.EstudosPreProva;

public class LivroEBook extends Livro {
	private int espacoMB;
	
	public LivroEBook(String titulo, int espacoMB) {
		super(titulo);
		this.espacoMB = espacoMB;
	}

	public int getEspacoMB() {
		return espacoMB;
	}
	
	@Override
	public String getTipoCarga() {
		return "mb";
	};
	
	@Override
	public int getCarga() {
		return this.getEspacoMB();
	};
	
	@Override
    public String getInfo() {
        return getTitulo() + " (EBook) - " + espacoMB + "MB";
    }
}
