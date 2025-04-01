package aula0319;

public class Ex3Triangulo {
	private float catetoA;
	private float catetoB;
	
	public void setCatetoA(float catetoA) {
		this.catetoA = catetoA;
	}
	public void setCatetoB(float catetoB) {
		this.catetoB = catetoB;
	}
	
	public double getHipotenusa() {
		return Math.sqrt(Math.pow(catetoA, 2) + Math.pow(catetoB, 2));
	}
}
