package ucs.excecoes;

public class DepositoInvalidoException extends Exception {//RuntimeException = não chega se está está dentro do bloco try/catch

	public static final String MESSAGE = "Valor Inválido para o Depósito";
	
	public DepositoInvalidoException() {
		super(MESSAGE);
	}

	public DepositoInvalidoException(String message, Throwable cause, boolean enableSuppression,
			boolean writableStackTrace) {
		super(MESSAGE + " " + message, cause, enableSuppression, writableStackTrace);
	}

	public DepositoInvalidoException(String message, Throwable cause) {
		super(MESSAGE + " " + message, cause);
	}

	public DepositoInvalidoException(String message) {
		super(MESSAGE + " " + message);
	}

	public DepositoInvalidoException(Throwable cause) {
		super(MESSAGE, cause);
	}
}
