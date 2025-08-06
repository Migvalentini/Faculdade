package aulas.aula0402;

public class Carro {
	private String nome;
	private String placa;
	private int capacidade;
	private int pesoMaximo;
	private Pessoa[] passageiros;
	
	public Carro() {

	}
	
	public Carro(String nome, String placa, int capacidade) {
		this.nome = nome;
		this.placa = placa;
		this.capacidade = capacidade;
		this.passageiros = new Pessoa[capacidade]; //cria um vetor de passageiros, com o tamanho de capacidade
	}
	
	public Carro(String nome, String placa, int capacidade, int pesoMaximo) {
		this.nome = nome;
		this.placa = placa;
		this.capacidade = capacidade;
		this.pesoMaximo = pesoMaximo;
		this.passageiros = new Pessoa[capacidade]; //cria um vetor de passageiros, com o tamanho de capacidade
	}

	public String getNome() {
		return nome;
	}
	public void setNome(String nome) {
		this.nome = nome;
	}
	public String getPlaca() {
		return placa;
	}
	public void setPlaca(String placa) {
		this.placa = placa;
	}
	public int getCapacidade() {
		return capacidade;
	}
	public void setCapacidade(int capacidade) {
		this.capacidade = capacidade;
	}
	
	public int getVagas() {
		int vagas = this.capacidade;
		for(Pessoa p : this.passageiros) {
			if(p != null) {
				vagas--;
			}
		}
		return vagas;
	}
	
	public int getQuantosPassageiros() {
		return this.capacidade = this.getVagas();
	}
	
	public boolean isCheio() {
		return this.getVagas() == 0;
	}
	
	public void embarca(Pessoa p) {
		//acha posição vazia no vetor
		int pos = this.getPosicaoVazia();
		//insere na posição
		if(pos >= 0 && this.aguentaMaisPeso(p.getPeso())) {
			this.passageiros[pos] = p;
		}
	}
	
	private int getPosicaoVazia() {
		for(int i = 0; i < this.passageiros.length; i++) {
			if(this.passageiros[i] == null) {
				return i;
			}
		}
		return -1; //devolve -1 se não houver mais vagas
	}
	
	public String getListaPassageiros() {
		StringBuilder sb = new StringBuilder();
		
		for(Pessoa p : this.passageiros) {
			if(p != null) {
				sb.append(p.getNome() + "\n");
			}
		}
		return sb.toString();
	}
	
	public void desembarca(String nome) {
		int pos = this.getPosicaoPorNome(nome);
		if(pos >= 0) {
			this.passageiros[pos] = null;
		}
	}
	
	private int getPosicaoPorNome(String nome) {
		for(int i=0; i < this.passageiros.length; i++) {
			if(this.passageiros[i] != null && nome.equals(this.passageiros[i].getNome())) {
				return i;
			}
		}
		return -1;
	}
	
	private int getPesoTotalPessoas() {
		int peso = 0;
		for(Pessoa p : this.passageiros) {
			if(p != null) {
				peso += p.getPeso();
			}
		}
		return peso;
	}
	
	private boolean aguentaMaisPeso(int quilos) {
		return (this.pesoMaximo - this.getPesoTotalPessoas()) >= quilos;
	}
}
