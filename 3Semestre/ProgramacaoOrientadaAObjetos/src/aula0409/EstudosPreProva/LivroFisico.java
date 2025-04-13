package aula0409.EstudosPreProva;

public class LivroFisico extends Livro {
	private int peso;
	private String tipoCapa;

	public LivroFisico(String titulo, int peso, String tipoCapa) {
		super(titulo);
		this.peso = peso;
		this.tipoCapa = tipoCapa;
	}

	public int getPeso() {
		return peso;
	}
	
	@Override
	public String getTipoCarga() {
		return "peso";
	};
	
	@Override
	public int getCarga() {
		return this.getPeso();
	}

	@Override
	public String toString() {
		return "LivroFisico [peso=" + peso + ", tipoCapa=" + tipoCapa + "]";
	};
	
	@Override
    public String getInfo() {
        return getTitulo() + " (Físico) - " + peso + "g";
    }
}
