package ucs.aula0402.Ex6;

public class Contato {
	private String nome;
	private String email;
	
	
	public Contato(String nome, String email) {
		this.nome = nome;
		this.email = email;
	}
	
	public String getNome() {
		return nome;
	}

	@Override
    public String toString() {
        return "Nome: " + nome + ", Email: " + email;
    }
}