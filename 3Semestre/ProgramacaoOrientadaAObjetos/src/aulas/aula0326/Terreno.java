package aulas.aula0326;

public class Terreno {
	private float lado;
	private float altura;
	private float precom2;
	private Endereco endereco;
	private Pessoa dono;

	public void setLado(float lado) {
		this.lado = lado;
	}

	public void setAltura(float altura) {
		this.altura = altura;
	}

	public float getArea() {
		return this.lado * this.altura;
	}

	public float getPrecom2() {
		return precom2;
	}

	public void setPrecom2(float precom2) {
		this.precom2 = precom2;
	}

	public Endereco getEndereco() {
		return endereco;
	}

	public void setEndereco(Endereco endereco) {
		this.endereco = endereco;
	}
	
	public float getPreco() {
		return this.getPrecom2() * this.getArea();
	}

	public Pessoa getDono() {
		return dono;
	}

	public void setDono(Pessoa dono) {
		this.dono = dono;
	}
}
