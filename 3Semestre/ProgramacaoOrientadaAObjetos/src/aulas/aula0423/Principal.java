package aulas.aula0423;

public class Principal {

	public static void main(String[] args) {
		Aluno a1, a2, a3;
		
		a1 = new Aluno("Mickey");
		a2 = new Aluno("Pluto");
		a3 = new Aluno("Pateta");
		
		System.out.println(a1);
		System.out.println(a2);
		System.out.println(a3);
		
		System.out.println("Próximo código: " + Aluno.getUltimoCodigo());
	}

}
