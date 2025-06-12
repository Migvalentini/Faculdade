package ucs.aula0326.Ex1;

import java.util.Date;

public class Principal {

	public static void main(String[] args) {
		// Você foi contratado para desenvolver um sistema simples para o controle de
		// animais de estimação em uma clínica veterinária. A clínica deseja informatizar
		// o cadastro de seus clientes e os animais de estimação que são atendidos. A
		// seguir, é apresentada a descrição do funcionamento da clínica:
		// 1. Clientes da clínica são as pessoas que possuem animais de estimação e
		// que levam seus pets para consultas. Cada cliente tem um nome, um
		// número de identificação único (ID), um endereço de e-mail e um telefone
		// de contato.
		// 2. Cada animal de estimação pertence a um cliente. Os animais de
		// estimação têm um nome, uma espécie (como cão, gato, etc), uma raça,
		// uma idade, e um número de identificação único (ID).
		// 3. A clínica mantém um registro das consultas realizadas. Cada consulta
		// está associada a um único animal de estimação e ocorre em uma data
		// específica. Durante a consulta, o veterinário pode registrar observações
		// sobre o estado de saúde do animal e indicar um tratamento ou
		// recomendação.

		Cliente cliente1 = new Cliente("Miguel", "miguel@gmail.com", "(54) 98765-4321");
		Animal animal1 = new Animal("Rex", "Cão", "Labrador", 5, 1, cliente1);
        Consulta consulta1 = new Consulta(new Date(), "Animal saudável", "Recomendar vacina anual", animal1);
        
        System.out.println("Informações do Cliente:");
        System.out.println("Nome do Cliente: " + cliente1.getNome());
        System.out.println("E-mail do Cliente: " + cliente1.getEmail());
        System.out.println("Telefone do Cliente: " + cliente1.getTelefone());
        System.out.println();

        System.out.println("Informações do Animal:");
        System.out.println("Nome do Animal: " + animal1.getNome());
        System.out.println("Espécie do Animal: " + animal1.getEspecie());
        System.out.println("Raça do Animal: " + animal1.getRaca());
        System.out.println("Idade do Animal: " + animal1.getIdade() + " anos");
        System.out.println("ID do Animal: " + animal1.getId());
        System.out.println("Dono do Animal: " + animal1.getDono().getNome());
        System.out.println();

        System.out.println("Informações da Consulta:");
        System.out.println("Data da Consulta: " + consulta1.getData());
        System.out.println("Observações do Veterinário: " + consulta1.getObservacoes());
        System.out.println("Recomendações após a Consulta: " + consulta1.getTratamento());
	}

}
