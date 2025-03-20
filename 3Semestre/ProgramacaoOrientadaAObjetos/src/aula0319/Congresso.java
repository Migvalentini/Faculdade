package aula0319;

import java.util.Scanner;

public class Congresso {

	public static void main(String[] args) {
		FichaInscricao f1 = new FichaInscricao();
		FichaInscricao f2 = new FichaInscricao();
		
		Scanner sc = new Scanner(System.in);
		
		f1.leDados(sc);
		f2.leDados(sc);
		
		f1.escreveDados();
		f2.escreveDados();
		
		sc.close();
	}

}
