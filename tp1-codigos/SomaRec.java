import java.util.Scanner;

class SomaRec{
	
//funcao para somar os digitos, quando se for apenas um digito retorna ele mesmo, caso contrario, a chamada da funçao retira o ultimo digito com n/10 e soma com o digito apos a chamada
	public static int Soma(int n){
		if(n <= 9) return n;
		else return Soma(n/10) + n%10;
	}

	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);

		while(sc.hasNextInt()){
			int num = sc.nextInt();
			System.out.println(Soma(num));
		}
		sc.close();
	}
}
