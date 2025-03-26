package aula0319;

public class Ex1Terreno {
	private float lado;
	private float altura;

	public void setLado(float lado) {
		this.lado = lado;
	}

	public void setAltura(float altura) {
		this.altura = altura;
	}

	public float getArea() {
		return this.lado * this.altura;
	}
}
