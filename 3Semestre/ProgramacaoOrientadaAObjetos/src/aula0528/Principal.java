package aula0528;

import java.util.ArrayList;
import java.util.Collections;
import java.util.LinkedList;
import java.util.List;

public class Principal {

	public static void main(String[] args) {
		//ArrayList = melhor performance para leitura
		//LinkedList = melhor performance para escrita
		
		Aluno a = new Aluno(1, "Mickey");
		
		List<Aluno> alunos = new ArrayList<>(); // <Aluno> declara a lista para o tipo Aluno
		
		alunos.add(a); // adiciona no final da lista e aumenta o tamanho
		alunos.add(new Aluno(2, "Pateta"));
		alunos.add(new Aluno(3, "Donald"));
		//alunos.add(new Integer(8)); dará erro, pois a lista só aceita Aluno
		
		alunos.set(0, new Aluno(4, "Margarida")); // edita o elemento do index X
		
		System.out.println("Antes: " + alunos.size());
		
		Aluno x = (Aluno) alunos.get(1); 
		//Aluno x = (Aluno) alunos.get(2); dará erro, pois tentará converter Integer para Aluno
		System.out.println("X: " + x);
		
		for(Aluno al : alunos) {
			System.out.println(al);
		}		
		
		alunos.remove(2);
		
		List<Aluno> alunos2 = new LinkedList<>();
		
		alunos2.add(new Aluno(6, "Tio Patinhas"));
		alunos2.add(new Aluno(7, "Pluto"));
		
		alunos.addAll(alunos2);

		Aluno donald = new Aluno();
		donald.setCodigo(3);
		
		//alunos.remove(donald);
		
		System.out.println("Depois: " + alunos.size());
		
		for(Aluno al : alunos) {
			System.out.println(al);
		}
		
		int posicao = alunos.indexOf(donald);
		System.out.println(posicao);
		
		Collections.sort(alunos);
		
		System.out.println("Ordenado: ");
		
		for(Aluno al : alunos) {
			System.out.println(al);
		}
	}
}
