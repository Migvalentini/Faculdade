package aulas.aula0319;

public class Principal {

	public static void main(String[] args) {
		FichaInscricao f1 = new FichaInscricao();
		FichaInscricao f2 = new FichaInscricao("Joãozinho");
		FichaInscricao f3 = new FichaInscricao("Luiszinho", "Farroupilha");
		
		f1.setNome("Alexandre");
		f1.setCidade("Caxias do Sul");
		
		System.out.println("Nome: " + f1.getNome() + "\nCidade: " + f1.getCidade() + "\nInvestimento: " + FichaInscricao.getInvestimento() + "\n");
		System.out.println("Nome: " + f2.getNome() + "\nCidade: " + f2.getCidade() + "\nInvestimento: " + FichaInscricao.getInvestimento() + "\n");
		System.out.println("Nome: " + f3.getNome() + "\nCidade: " + f3.getCidade() + "\nInvestimento: " + FichaInscricao.getInvestimento() + "\n");
		System.out.println(f3);
	}
}
