import java.util.Scanner;

class Fila{
	String[] array;
	int fim;
	int n;

	public Fila(int tam){
		array = new String[tam];
		n = tam;
		fim = 0;
	}

	public void enfileirar(String x){
		if(fim == n) return;
		array[fim] = x;
		fim++;
	}

	public String desenfileirar(){
		if(vazia() == true){
		System.out.println("Vazia");
		return null;
		}
		String x = array[0];
		for(int i = 0; i < fim - 1; i++){
			array[i] = array[i + 1];
		}
		fim--;
		return x;
	}

	public boolean vazia(){
		if(fim == 0) return true;
		else return false;
	}

	public boolean cheia(){
		if(fim == array.length) return true;
		else return false;
	}

	public String primeiro(){
		return array[0];
	}
	public void mostrar(){
		if(vazia()){
			System.out.println("Vazia");
			return;
		}
		else{
			for(int i = 0; i < fim; i++){
				System.out.print(array[i] + " ");
			}
			System.out.println();	
		}
	}

}

class Dragoes{
	public static void Dragao(int n, int m){
		Scanner sc = new Scanner(System.in);
		Fila fila = new Fila(n);
		String nome;


		char ev;		
		for(int i = 0; i < m; i++){
			ev = sc.next().charAt(0);
			if(ev == 'E'){
				nome = sc.next();
				if(fila.cheia() == true) System.out.println("Fila cheia");
				else fila.enfileirar(nome);
			}
			else if(ev == 'V'){
				if(fila.vazia() == true) System.out.println("Fila vazia");
				else fila.desenfileirar();
			}
			else if(ev == 'B'){
				fila.mostrar();
			}
		}
		fila.mostrar();				
	}	

	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int m = sc.nextInt();

		Dragao(n, m);
	}

}

