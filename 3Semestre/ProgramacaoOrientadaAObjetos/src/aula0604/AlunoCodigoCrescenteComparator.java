package aula0604;

import java.util.Comparator;

public class AlunoCodigoCrescenteComparator implements Comparator<Aluno> {

	@Override
	public int compare(Aluno o1, Aluno o2) {
		return o1.getCodigo() - o2.getCodigo();
	}

}
