package aulas.aula0402.Ex6;

public class Agenda {
	private Contato contatos[];

	public Agenda(int tamanho) {
		this.contatos = new Contato[tamanho];
	}
	
	public boolean adicionarContato(Contato contato) {
		for(int i=0; i<contatos.length; i++) {
			if(contatos[i] == null) {
				contatos[i] = contato;
				return true;
			}
		}
		return false;
	}
	
	public void listarContatos() {
		for(int i=0; i<contatos.length; i++) {
			if(contatos[i] != null) {				
				System.out.println(contatos[i]);
			}
		}
	}
	
	public Contato buscarPorNome(String nome) {
		for(Contato c : contatos) {
			if(c != null && c.getNome().equals(nome)) {				
				return c;
			}
		}
		return null;
	}
	
	public boolean excluirPorNome(String nome) {
		for(int i=0; i<contatos.length; i++) {
			if(contatos[i] != null && contatos[i].getNome().equals(nome)) {
				contatos[i] = null;
				return true;
			}
		}
		return false;
	}
}
