package aula0319;

public class Ex1Terreno {
	private int lado;
	private float altura;

	public void setLado(int lado) {
		this.lado = lado;
	}

	public void setAltura(int altura) {
		this.altura = altura;
	}

	public float calculaArea() {
		 return this.lado * this.altura;
	 }
}
