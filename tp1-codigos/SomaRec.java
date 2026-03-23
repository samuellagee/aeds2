import java.util.Scanner;

class SomaRec{
	
//funcao para somar os digitos, quando se for apenas um digito retorna ele mesmo, caso contrario, a chamada da funçao retira o ultimo digito com n/10 e soma com o digito apos a chamada
	public static int Soma(int n){
		if(n <= 9) return n;
		else return Soma(n/10) + n%10;
	}

//para condiçao de parada funcionar, o programa le uma e string e apos entrar no laço chama essa funçao que transforma caracter em numero inteiro, usando o caracter '0' para auxiliar
	public static int Convert(String p){
		int n = 0;
		for(int i = 0; i < p.length(); i++){
			n = n * 10 + (p.charAt(i) - '0');
		}

		return n;
	}			

	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		String p = sc.nextLine();

		while(!(p.length() == 3 && p.charAt(0) == 'F' && p.charAt(1) == 'I' && p.charAt(2) == 'M')){
			int n = Convert(p);
			System.out.println(Soma(n));

			p = sc.nextLine();
		}
		sc.close();
	}
}
