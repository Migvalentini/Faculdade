package aula0319;

public class Ex5Losango {
	private float diagonal_maior;
	private float diagonal_menor;
	
	public void setDiagonal_maior(float diagonal_maior) {
		this.diagonal_maior = diagonal_maior;
	}
	public void setDiagonal_menor(float diagonal_menor) {
		this.diagonal_menor = diagonal_menor;
	}
	
	public float getArea() {
		return (this.diagonal_maior * this.diagonal_menor) / 2;
	}
}
