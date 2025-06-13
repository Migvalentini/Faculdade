package ucs.aula0604;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class Principal {

	public static void main(String[] args) {
		Principal p = new Principal();
		
		List<Aluno> alunos = new ArrayList<>();
		
		alunos.add(new Aluno(55, "Pedro"));
		alunos.add(new Aluno(12, "Mateus"));
		alunos.add(new Aluno(74, "João"));
		
		System.out.println("Antes: ");
		for(Aluno a : alunos) {
			p.mostraAluno(a);
		}
		
		Collections.sort(alunos);
		
		System.out.println("\nDepois: ");
		for(Aluno a : alunos) {
			p.mostraAluno(a);
		}
		
		Collections.sort(alunos, new AlunoCodigoCrescenteComparator());
		
		System.out.println("\nDepois do comparator crescente: ");
		for(Aluno a : alunos) {
			p.mostraAluno(a);
		}
		
		Collections.sort(alunos, new AlunoCodigoDecrescenteComparator());
		
		System.out.println("\nDepois do comparator decrescente: ");
		for(Aluno a : alunos) {
			p.mostraAluno(a);
		}
	}
	
	public void mostraAluno(Aluno a) {
		System.out.println(a.getNome());
	}

}
