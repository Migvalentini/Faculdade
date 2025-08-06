package aulas.aula0402.Ex2;

public class TesteArray {
	private int inteiros[];

	public TesteArray(int tamanho) {
		this.inteiros = new int[tamanho];
	}

	public int[] getInteiros() {
		return inteiros;
	}
	
	public int[] recebeArray(int array[]) {
		array[0] = 999;
		return array;
	}
}
