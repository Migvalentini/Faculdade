package ucs.aula0604;

import java.util.Comparator;

public class AlunoCodigoDecrescenteComparator implements Comparator<Aluno> {
	@Override
	public int compare(Aluno o1, Aluno o2) {
		return o2.getCodigo() - o1.getCodigo();
	}
}
