import java.util.Scanner;

class CiframentoCesar{
	public static Scanner sc = new Scanner(System.in);

	public static String cifrar(String p){
		String cifrada = "";
		for(int i = 0; i < p.length(); i++){
			char c = (char)(p.charAt(i));
				if(c >= 'a' && c <= 'z'){
					c = (char)('a' + (c - 'a'+ 3)%26);
				}else if(c >= 'A' && c <= 'Z'){
					c = (char)('A' + (c - 'A'+ 3)%26);
				}
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
