package aulas.aula0514;

import aulas.excecoes.DepositoGrandeDemaisException;
import aulas.excecoes.DepositoInvalidoException;

public class ContaBancaria {
	private int nro;
	private float saldo;
	
	public ContaBancaria (int nro) {
		this.nro = nro;
		this.saldo = 0;
	}

	public int getNro() {
		return nro;
	}

	public float getSaldo() {
		return saldo;
	}
	
	public void depositar(float quantia) throws DepositoInvalidoException, DepositoGrandeDemaisException {
		if(quantia > 0) {			
			this.saldo += quantia;
		} 
		if(quantia > 1000000) {
			throw new DepositoGrandeDemaisException(quantia + " deve ser lavagem de dinheiro");
		} else {
			throw new DepositoInvalidoException("A quantia " + quantia + " quantia não pode ser depositada");
		}
	}
}
