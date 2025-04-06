package aula0402.Ex5;

public class Automovel {
	private String nome;
	private String marca;
	private String cor;
	
	public Automovel(String nome, String marca, String cor) {
		this.nome = nome;
		this.marca = marca;
		this.cor = cor;
	}
	
	public String getCor() {
		return cor;
	}

	public String dados() {
        return "Marca: " + marca + ", Nome: " + nome + ", Cor: " + cor;
    }
}
