package aulas.aula0409.Ex3;

public class Novo extends Imovel {
	private double valorAdicional;

	public Novo(String endereco, double preco, double valorAdicional) {
		super(endereco, preco);
		this.valorAdicional = valorAdicional;
	}

	public double getValorAdicional() {
		return valorAdicional;
	}

	public void setValorAdicional(double valorAdicional) {
		this.valorAdicional = valorAdicional;
	}
	
	public void imprimirAdicional() {
        System.out.println("Adicional no preço: R$" + valorAdicional);
        System.out.println("Preço total: R$" + (getPreco() + valorAdicional));
    }
}
