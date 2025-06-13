package ucs.aula0528;

public class Telefone {
	private String id;
	private String ddd;
	private String numero;
	
	public Telefone() {
		
	}
	
	public Telefone(String id, String ddd, String numero) {
		this.id = id;
		this.ddd = ddd;
		this.numero = numero;
	}
	
	public String getId() {
		return id;
	}
	public void setId(String id) {
		this.id = id;
	}
	public String getDdd() {
		return ddd;
	}
	public void setDdd(String ddd) {
		this.ddd = ddd;
	}
	public String getNumero() {
		return numero;
	}
	public void setNumero(String numero) {
		this.numero = numero;
	}

	@Override
	public String toString() {
		return "Telefone [id=" + id + ", ddd=" + ddd + ", numero=" + numero + "]";
	}
	
	
}
