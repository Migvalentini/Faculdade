package ucs.aula0604.Ex1;

import java.util.HashMap;
import java.util.Map;

public class Principal {

	public static void main(String[] args) {
		// Escreva um programa para criar um HashMap de String, ID(Identificação : número,
		// textp, como preferir). Adicione 20 elementos aleatórios a esse HashMap. Após, liste as
		// apenas as chaves contidas no HashMap.

		Map<Integer, String> mapa = new HashMap<>();
		
		mapa.put(1, "valor1");
		mapa.put(2, "valor2");
		mapa.put(3, "valor3");
		mapa.put(4, "valor4");
		mapa.put(5, "valor5");
		mapa.put(6, "valor6");
		mapa.put(7, "valor7");
		mapa.put(8, "valor8");
		mapa.put(9, "valor9");
		mapa.put(10, "valor10");
		mapa.put(11, "valor11");
		mapa.put(12, "valor12");
		mapa.put(13, "valor13");
		mapa.put(14, "valor14");
		mapa.put(15, "valor15");
		mapa.put(16, "valor16");
		mapa.put(17, "valor17");
		mapa.put(18, "valor18");
		mapa.put(19, "valor19");
		mapa.put(20, "valor20");
		
		System.out.println(mapa.keySet());
	
		for (Integer chave : mapa.keySet()) {
			System.out.println(chave);
		}
	}
}