package aulas.aula0507;

public class Principal {

	public static void main(String[] args) {
		// Implementar as classes e interfaces a seguir. Cada uma das classes terá a
		// sua forma de cálculo de salário.
		// Desafio: Professor também é Colaborador.
		// Interface Colaborador: 
		// - Métodos obtemSalario e cargaHoraria. Contém uma propriedade float estática
		// correspondente ao valor base da hora.
		// Interface Professor:
		// - Método obtemTitulacao : serve de base para o adicional
		// 		Graduação : sem adicional
		// 		Mestrado : adicional de 20%
		// 		Doutorado : adicional de 50%
		// Observação: os metodos anteriores possuem atributos associados (carga
		// horaria e titulação), que deverão ser criadas, bem como formas para definir os
		// valores das mesmas (via métodos normais ou construtores). Lembrem-se de
		// utilizar herança, e controlar a visibilidade dos métodos e atributos usando os
		// modificadores adequados.
		
		// Classes:
		// Estagiario (implementa Colaborador) : 
		// 		salário = cargaHoraria * valor base
		// Funcionario (implementa Colaborador) : 
		// 		salário = cargaHoraria * valor base * 2
		// ProfessorTecnico (implementa Professor) : 
		// 		salário = cargaHoraria * valorBase * 3 * adicional pela titulacao
		// ProfessorGraduacao (implementa Professor) : 
		// 		salário = cargaHoraria * valorBase * 4 * adicional pela titulação
		// Lembrando-se que, para ser professor de determinado nível é necessária a
		// graduação mínima, a saber:
		// Nível                  Graduação Mínima
		// Curso Técnico          Graduação
		// Curso de Graduação     Mestrado
		// Curso de Pós-Graduação Doutorado
		// - Criar um atributo nome nas classes e um construtor para cada classe que irá
		// receber este nome. Exemplo de criação:
		// Colaborador c = new Estagiario(“Eu”)
		// - Em um método principal, criar um vetor de colaboradores (Colaborador[]) e
		// nele incluir diversas pessoas diferentes.
		// - Depois, percorrer o vetor mostrando o nome e o salário de cada pessoa,
		// sendo que para Professores deverá ser exibido um “*” ao lado do nome.

		
	}

}
