package aulas.aula0409.Ex3;

public class Velho extends Imovel {
	private double valorDesconto;

	public Velho(String endereco, double preco, double valorDesconto) {
		super(endereco, preco);
		this.valorDesconto = valorDesconto;
	}

	public double getValorDesconto() {
		return valorDesconto;
	}

	public void setValorDesconto(double valorDesconto) {
		this.valorDesconto = valorDesconto;
	}
	
	public void imprimirDesconto() {
        System.out.println("Adicional no preço: R$" + valorDesconto);
        System.out.println("Preço total: R$" + (getPreco() - valorDesconto));
    }
}
