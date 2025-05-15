package aula0514;

import java.util.InputMismatchException;
import java.util.Scanner;

import excecoes.DepositoGrandeDemaisException;
import excecoes.DepositoInvalidoException;

public class Principal {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		try {
			System.out.println("Informe um número: ");
			//int a = sc.nextInt();
			int a = 10;
			
			System.out.println("Número informado: " + a);
			
		} catch(InputMismatchException ime) {
			System.out.println("Deu o erro: " + ime.getMessage());
		} finally {
			sc.close();			
		}
		
		
		ContaBancaria c1 = new ContaBancaria(25);
		System.out.println("Saldo: " + c1.getSaldo());
		try {
			c1.depositar(999999999);
			c1.depositar(100);
			c1.depositar(-100);
		} catch (DepositoGrandeDemaisException e) {
			System.out.println(e.getMessage());
		} catch (DepositoInvalidoException e) {
			e.printStackTrace(); //mostrar a exceção na tela
		} 
		System.out.println("Saldo: " + c1.getSaldo());
	}
}
