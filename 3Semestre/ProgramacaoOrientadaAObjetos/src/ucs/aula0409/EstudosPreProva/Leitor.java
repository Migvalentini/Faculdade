package ucs.aula0409.EstudosPreProva;

public class Leitor {
	private String nome;
	private Livro livros[];
	private int limiteLivros;
	private int limitePeso;
	private int limiteEspaco;
	
	public Leitor(String nome, int limiteLivros, int limitePeso, int limiteEspaco) {
		this.nome = nome;
		this.livros = new Livro[limiteLivros];
		this.limiteLivros = limiteLivros;
		this.limitePeso = limitePeso;
		this.limiteEspaco = limiteEspaco;
	}
	
	public String getNome() {
		return nome;
	}

	public Livro[] getLivros() {
		return livros;
	}

	public int getLimiteLivros() {
		return limiteLivros;
	}

	public int getLimitePeso() {
		return limitePeso;
	}

	public int getLimiteEspaco() {
		return limiteEspaco;
	}
	
	public void listarLivros() {
	    System.out.println("Livros: ");
	    for (Livro l : livros) {
	        if (l != null) {
	            System.out.println(l.getInfo());
	        }
	    }
	}

 	public void pegarLivro(Livro livro) 
	{
		int pos = getPosicaoVazia();
		
		if (pos >= 0 && !isAtingidoLimiteLivros()) {
			if (livro.getTipoCarga().equals("peso") && aguentaMaisPeso(livro.getCarga())) {
	            this.livros[pos] = livro;
	            System.out.println("Livro físico adicionado. " + this.getLivrosDisponiveis() + " vagas restantes.");
	        } else if (livro.getTipoCarga().equals("mb") && aguentaMaisEspaco(livro.getCarga())) {
	            this.livros[pos] = livro;
	            System.out.println("eBook adicionado. " + this.getLivrosDisponiveis() + " vagas restantes.");
	        } else {
	            System.out.println("Não há espaço suficiente para esse livro.");
	        }
	    } else {
	        System.out.println("Não foi possível adicionar o livro.");
	    }
	}
 	
 	public void devolverLivro(String nome) {
 		for (int i = 0; i < livros.length; i++) {
 		    if (livros[i] != null && livros[i].getTitulo().equals(nome)) {
 		        System.out.println("Livro " + livros[i].getTitulo() + " devolvido");
 		        livros[i] = null;
 		        break;
 		    }
 		}
 	}
	
	private int getPosicaoVazia() {
		for(int i=0; i<this.limiteLivros; i++) {
			if(this.livros[i] == null) {
				return i;
			}
		}
		
		return -1;
	}
	
	private Boolean isAtingidoLimiteLivros() {
		return this.getLivrosDisponiveis() == 0;
	}
	
	private int getLivrosDisponiveis() {
		int cont = this.limiteLivros;
		for(Livro l : this.livros) {
			if(l != null) {
				cont--;
			}
		}
		return cont;
	}

	private Boolean aguentaMaisPeso(int peso) {
		return this.getPesoDisponivel() >= peso;
	}
	
	private int getPesoDisponivel() {
		int cont = this.limitePeso;
		for(Livro l : livros) {
			if(l!= null && l.getTipoCarga().equals("peso")) {
				cont -= l.getCarga();
			}
		}
		return cont;
	}
	
	private Boolean aguentaMaisEspaco(int espaco) {
		return this.getEspacoDisponivel() >= espaco;
	}
	
	private int getEspacoDisponivel() {
		int cont = this.limiteEspaco;
		for(Livro l : livros) {
			if(l!= null && l.getTipoCarga().equals("mb")) {
				cont -= l.getCarga();
			}
		}
		return cont;
	}
}
