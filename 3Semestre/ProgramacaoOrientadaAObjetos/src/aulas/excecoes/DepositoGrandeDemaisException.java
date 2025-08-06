package aulas.excecoes;

@SuppressWarnings("serial")
public class DepositoGrandeDemaisException extends Exception {

	public static final String MESSAGE = "Esse valor não dá";
	
	public DepositoGrandeDemaisException() {
		super(MESSAGE);
	}

	public DepositoGrandeDemaisException(String message, Throwable cause, boolean enableSuppression,
			boolean writableStackTrace) {
		super(MESSAGE + " " + message, cause, enableSuppression, writableStackTrace);
	}

	public DepositoGrandeDemaisException(String message, Throwable cause) {
		super(MESSAGE + " " + message, cause);
	}

	public DepositoGrandeDemaisException(String message) {
		super(MESSAGE + " " + message);
	}

	public DepositoGrandeDemaisException(Throwable cause) {
		super(MESSAGE, cause);
	}
}
