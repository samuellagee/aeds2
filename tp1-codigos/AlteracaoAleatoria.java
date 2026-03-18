import java.util.Random;
import java.util.Scanner;

public class AlteracaoAleatoria {

//cria dois caracteres aleatorios, passa pela string recebida, detecta quando o primeiro caracter randomizado aparecer e concatena na string trocada com o segundo caracter randomizado, se nao achar o caracter, apenas concatena com o caracter lido 
	public static String sorteio(String s, Random gerador) {
		String trocada = "";
		char l1 = ((char)('a' + (Math.abs(gerador.nextInt()) % 26)));
		char l2 = ((char)('a' + (Math.abs(gerador.nextInt()) % 26)));

		for(int i = 0; i < s.length(); i++){
			if(s.charAt(i) == l1){
				trocada = trocada + l2;
			}else trocada = trocada + s.charAt(i);
		}
		return trocada;
	}

	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		Random gerador = new Random();
		gerador.setSeed(4);

		String s = sc.nextLine();

		while (!(s.length() == 3 && s.charAt(0) == 'F' && s.charAt(1) == 'I' && s.charAt(2) == 'M')) {
			System.out.println(sorteio(s, gerador));
			System.out.println();
			s = sc.nextLine();

		}
		sc.close();
	}
}
