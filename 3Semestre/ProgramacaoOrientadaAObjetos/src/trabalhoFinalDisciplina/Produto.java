package trabalhoFinalDisciplina;

import java.util.ArrayList;
import java.util.Objects;

public class Produto implements Comparable<Produto> {
	private static int ultimoCodigo = 0;
	private int codigo;
	private String nome;
	private String descricao;
	private Estoque estoque;
	private ArrayList<ItemPedido> itensPedido = new ArrayList<ItemPedido>();
	
	public Produto() {
		
	}
	
	public Produto(String nome, String descricao, Estoque estoque) {
		this.codigo = ultimoCodigo++;
		this.nome = nome;
		this.descricao = descricao;
		this.estoque = estoque;
	}
	
	public static void setUltimoCodigo(int ultimoCodigo) {
        Produto.ultimoCodigo = ultimoCodigo;
    }
	
	public void adicionarItemPedido(ItemPedido item) {
        itensPedido.add(item);
    }

	public int getCodigo() {
		return codigo;
	}

	public void setCodigo(int codigo) {
		this.codigo = codigo;
	}

	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public String getDescricao() {
		return descricao;
	}

	public void setDescricao(String descricao) {
		this.descricao = descricao;
	}

	public Estoque getEstoque() {
		return estoque;
	}

	public void setEstoque(Estoque estoque) {
		this.estoque = estoque;
	}
	
	public ArrayList<ItemPedido> getItensPedido() {
		return itensPedido;
	}

	public void setItensPedido(ArrayList<ItemPedido> itensPedido) {
		this.itensPedido = itensPedido;
	}

	@Override
	public String toString() {
	    return "\nProduto #" + codigo + (estoque.getQuantidade() == 0 ? " [Indisponível]" : "") +
	           " | Nome: " + nome + 
	           ", Descrição: " + descricao + 
	           ", Estoque: [" + (estoque != null ? estoque : "sem estoque") + "]";
	}

	@Override
	public int hashCode() {
		return Objects.hash(codigo, nome);
	}

	@Override
	public boolean equals(Object obj) {
		if (this == obj)
			return true;
		if (obj == null)
			return false;
		if (getClass() != obj.getClass())
			return false;
		Produto other = (Produto) obj;
		return codigo == other.codigo && Objects.equals(nome, other.nome);
	}

	@Override
	public int compareTo(Produto o) {
		return this.nome.compareTo(o.nome);
	}

	
}
