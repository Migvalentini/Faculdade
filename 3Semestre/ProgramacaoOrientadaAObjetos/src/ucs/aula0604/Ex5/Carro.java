package ucs.aula0604.Ex5;

public class Carro {
	private String placa;
	private String nome;
	private int anoFabricacao;
	private String cor;
	
	public Carro() {

	}
	
	public Carro(String placa, String nome, int anoFabricacao, String cor) {
		this.placa = placa;
		this.nome = nome;
		this.anoFabricacao = anoFabricacao;
		this.cor = cor;
	}
	
	public String getPlaca() {
		return placa;
	}
	public void setPlaca(String placa) {
		this.placa = placa;
	}
	public String getNome() {
		return nome;
	}
	public void setNome(String nome) {
		this.nome = nome;
	}
	public int getAnoFabricacao() {
		return anoFabricacao;
	}
	public void setAnoFabricacao(int anoFabricacao) {
		this.anoFabricacao = anoFabricacao;
	}
	public String getCor() {
		return cor;
	}
	public void setCor(String cor) {
		this.cor = cor;
	}
	
	@Override
	public String toString() {
		return "Carro [placa=" + placa + ", nome=" + nome + ", anoFabricacao=" + anoFabricacao + ", cor=" + cor + "]";
	}
	
	
}
