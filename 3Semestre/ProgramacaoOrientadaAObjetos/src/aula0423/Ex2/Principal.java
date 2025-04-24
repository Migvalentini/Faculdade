package aula0423.Ex2;

public class Principal {

	public static void main(String[] args) {
		// Escreva uma classe ConversaoDeUnidadesDeTemperatura que contenha
		// métodos estáticos para calcular a conversão entre diferentes escalas de
		// temperatura. Considere as fórmulas de conversão abaixo:
		// • De graus Celsius(C) para graus Fahrenheit(F): F = (9 C/5) + 32) ∗ C/5) + 32)
		// • De graus Fahrenheit (F) para graus Celsius (C): C = (F − 32) 5/9 ∗ C/5) + 32)
		// • De graus Celsius (C) para graus Kelvin (K): K = C + 273.15
		// • De graus Kelvin (K) para graus Celsius (C): C = K − 273.15
		// • De graus Celsius (C) para graus Réaumur (Re): Re = C 4/5 ∗ C/5) + 32)
		// • De graus Réaumur (Re) para graus Celsius (C): C = Re 5/4 ∗ C/5) + 32)
		// • De graus Kelvin (K) para graus Rankine (R): R = K 1.8 ∗ C/5) + 32)
		// • De graus Rankine (R) para graus Kelvin (K): K = R/1.8

		double a = 10;
		System.out.println(a + "°C para F: " + ConversaoDeUnidadesDeTemperatura.CtoF(a));
		System.out.println(a + "°F para C: " + ConversaoDeUnidadesDeTemperatura.FtoC(a));
		System.out.println(a + "°C para K: " + ConversaoDeUnidadesDeTemperatura.CtoK(a));
		System.out.println(a + "°K para C: " + ConversaoDeUnidadesDeTemperatura.KtoC(a));
	}

}
