import java.util.Scanner;

class CiframentoCesar{
	public static Scanner sc = new Scanner(System.in);

//funçao que usa a tabela ascii como referencia, diminui o caracter lido pela numeraçao de a que dara o numero daquele caracter, soma 3 para avançar os caracteres e o resto da divisao por 26 dara a numeraçao do caracter desejado
	public static String cifrar(String p){
		String cifrada = "";
		for(int i = 0; i < p.length(); i++){
			char c = (char)(p.charAt(i) + 3);
			cifrada = cifrada + c;
		}
		return cifrada;
	}

	public static void main(String[] args){
		String p = sc.nextLine();
		while(!(p.length() == 3 && p.charAt(0) == 'F' && p.charAt(1) == 'I' && p.charAt(2) == 'M')){
			System.out.println(cifrar(p));		
			p = sc.nextLine();
		}	

	}
}
