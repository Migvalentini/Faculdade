package aula0409.Ex3;

public class Velho extends Imovel {
	private double valorDesconto;

	public Velho(String endereco, double preco, double valorAdicional) {
		super(endereco, preco);
		this.valorDesconto = valorAdicional;
	}

	public double getValorAdicional() {
		return valorDesconto;
	}

	public void setValorAdicional(double valorAdicional) {
		this.valorDesconto = valorAdicional;
	}
	
	public void imprimirDesconto() {
        System.out.println("Adicional no preço: R$" + valorDesconto);
        System.out.println("Preço total: R$" + (getPreco() - valorDesconto));
    }
}
