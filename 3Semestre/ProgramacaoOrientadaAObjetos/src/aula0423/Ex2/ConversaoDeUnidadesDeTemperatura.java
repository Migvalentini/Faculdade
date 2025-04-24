package aula0423.Ex2;

public class ConversaoDeUnidadesDeTemperatura {
	/*
	// • De graus Celsius(C) para graus Fahrenheit(F): F = (9 * C/5) + 32)
	// • De graus Fahrenheit (F) para graus Celsius (C): C = (F − 32) * 5/9
	// • De graus Celsius (C) para graus Kelvin (K): K = C + 273.15
	// • De graus Kelvin (K) para graus Celsius (C): C = K − 273.15
	// • De graus Celsius (C) para graus Réaumur (Re):  Re = C * 4/5
	// • De graus Réaumur (Re) para graus Celsius (C): C = Re * 5/4
	// • De graus Kelvin (K) para graus Rankine (R):  R = K * 1.8 
	// • De graus Rankine (R) para graus Kelvin (K): K = R/1.8
	 * */
	
	public static double CtoF(double x) {
		return (9 * x/5) + 32;
	}
	
	public static double FtoC(double x) {
		return (x - 32) * 5/9;
	}
	
	public static double CtoK(double x) {
		return x + 273.15;
	}
	
	public static double KtoC(double x) {
		return x - 273.15;
	}
}
