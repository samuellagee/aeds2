import java.util.Scanner;

class Pilha{
	int[] array;
	int n;

	public Pilha(int tam){
		array = new int[tam];
		n = 0;
	}
	
	public void empilhar(int x){
		array[n] = x;
		n++;
	}
	
	public int desempilhar(){
		int val = array[n - 1];
		n--;
		return val;
	}

	public int topo(){
		return array[n - 1];
	}

	public boolean vazia(){
		if(n == 0) return true;
		else return false;
	}
	
	public int quantElem(){
		return n;
	}
}

public class Estacionamento{

	public static boolean Estacionar(int n, int k, int c[], int s[]){
		boolean resp = true;
		Pilha pilha = new Pilha(n);
		
		for(int i = 0; i < n; i++){
			while(pilha.vazia() != true && pilha.topo() <= c[i]){
				pilha.desempilhar();
			}

			if(pilha.vazia() != true && pilha.topo() < s[i]){
				resp = false;
			}
			
			pilha.empilhar(s[i]);
			if(pilha.quantElem() > k){
				resp = false;
			}
		}

		return resp; 
	}
	
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int k = sc.nextInt();
		
		while(n != 0 && k != 0){
			int c[] = new int[n];
	        int s[] = new int[n];
			for(int i = 0; i < n; i++){
				c[i] = sc.nextInt();
				s[i] = sc.nextInt();
        	}

			boolean resp = Estacionar(n, k, c, s);
			if(resp == true) System.out.println("Sim");
			else System.out.println("Nao");

			n = sc.nextInt();
			k = sc.nextInt();
		}
	
		sc.close();
	}
}
