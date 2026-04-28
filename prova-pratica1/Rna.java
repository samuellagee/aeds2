import java.util.Scanner;

class Pilha{
	char[] array;
	int n;

	public Pilha(int tam){
		array = new char[tam];
		n = 0;
	}

	public void empilhar(char x){
		array[n] = x;
		n++;
	}

	public void desempilhar(){
		n--;
	}
	
	public int getN(){
		return n;
	}

	public char getC(){
		return array[n - 1];
	}
}

class Rna{
	public static int Ligacoes(String p){
	int lig = 0;
	Pilha pilha = new Pilha(p.length());
	
	for(int i = 0; i < p.length(); i++){
		char c = p.charAt(i);
		int n = pilha.getN();
		if(pilha.getN() > 0 && (pilha.getC() == 'B' && c == 'S' ||
				pilha.getC() == 'S' && c == 'B' || 
				pilha.getC() == 'C' && c == 'F' || 
				pilha.getC() == 'F' && c == 'C')){
			pilha.desempilhar();
			lig++;
		}
		else{
			pilha.empilhar(c);
		}
	}
	
	return lig;
}

	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		
		while(sc.hasNextLine()){
			String p = sc.nextLine();
			int ligacoes = Ligacoes(p);
			System.out.println(ligacoes);

			p = sc.nextLine();
		}
	}



}

