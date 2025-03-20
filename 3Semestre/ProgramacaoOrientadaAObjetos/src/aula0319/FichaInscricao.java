package aula0319;

import java.util.Scanner;

public class FichaInscricao {
	private static final double INVESTIMENTO = 20;
	// static = atributo de classe. É compartilhada
    // atributo de instância = cada um tem o seu
	
	private String nome;
	private String endereco;
	private String cidade;
	private String estado;
	private String telefone;
	private String email;
	private boolean pago;
	
	//estutura dos métodos:
	//modificador tipoderetorno nomedometodo (listadeoparametros) {
	//    codigo
	//}
	
	public FichaInscricao() { //método construtor/inicializador
		this.setPago(false); //em Java, por padrão, uma variável do tipo bool é criada como false
	}
	
	public FichaInscricao(String nome) { //método construtor. Inicializador
		this(); //executa o primeiro construtor
		this.setNome(nome);
	}
	
	public FichaInscricao(String nome, String cidade) { //método construtor. Inicializador
		this();
		this.setNome(nome);
		this.setCidade(cidade);
	}
	
	public String getNome() {
		return nome;
	}
	public void setNome(String nome) {
		if(this.validaNome(nome)) {
			this.nome = nome;			
		}
	}
	public String getEndereco() {
		return endereco;
	}
	public void setEndereco(String endereco) {
		this.endereco = endereco;
	}
	public String getCidade() {
		return cidade;
	}
	public void setCidade(String cidade) {
		this.cidade = cidade;
	}
	public String getEstado() {
		return estado;
	}
	public void setEstado(String estado) {
		this.estado = estado;
	}
	public String getTelefone() {
		return telefone;
	}
	public void setTelefone(String telefone) {
		this.telefone = telefone;
	}
	public String getEmail() {
		return email;
	}
	public void setEmail(String email) {
		this.email = email;
	}
	public static double getInvestimento() {
		return INVESTIMENTO;
	}
	public boolean isPago() { //muda a nomenclatura por ser do tipo boolean
		return pago;
	}
	public void setPago(boolean pago) {
		this.pago = pago;
	}
	public boolean validaNome(String nome) {
		int tamanhoMinimo = 5;
		if(nome == null || nome.length() < tamanhoMinimo) {
			return false;
		}
		return true;
	}
	public String toString() {
		return "Nome = " + this.nome + "\nCidade = " + this.cidade;
	}
	
	public void leDados() {
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Digite seu nome: ");
		this.setNome(sc.nextLine());
		System.out.println("Digite seu endereço: ");
		this.setEndereco(sc.nextLine());
		System.out.println("Digite sua cidade: ");
		this.setCidade(sc.nextLine());
		System.out.println("Digite seu estado: ");
		this.setEstado(sc.nextLine());
		System.out.println("Digite seu telefone: ");
		this.setTelefone(sc.nextLine());
		System.out.println("Digite seu email: ");
		this.setEmail(sc.nextLine());
	}
	
	public void escreveDados() {
		System.out.println("Nome: " + this.getNome());
		System.out.println("Endereço: " + this.getEndereco());
		System.out.println("Cidade: " + this.getCidade());
		System.out.println("Estado: " + this.getEstado());
		System.out.println("Telefone: " + this.getTelefone());
		System.out.println("Email: " + this.getEmail());
		System.out.println("Pago: " + this.isPago());
		System.out.println("Investimento: " + this.getInvestimento());
	}
}
