import java.util.Scanner;

class Validacao{
//funçao booleana que faz as verificaçoes necessarias de acordo com a questao
	public static boolean Senha(String p){
		boolean mai = false;
		boolean min = false;
		boolean num = false;
		boolean car = false;
		boolean resp = true;
		if(p.length() < 8) resp = false;
		
			for(int i = 0; i < p.length(); i++){
				if(p.charAt(i) >= 'A' && p.charAt(i) <= 'Z') mai = true;
				if(p.charAt(i) >= 'a' && p.charAt(i) <= 'z') min = true;
				if(p.charAt(i) >= '0' && p.charAt(i) <= '9') num = true;
				if(p.charAt(i) == '!' || p.charAt(i) == '@' || p.charAt(i) == '#' || p.charAt(i) == '$' || p.charAt(i) == '^') car = true;	
			}
		if((mai && min && num && car) == false) resp = false;							
						
		return resp;
}

	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		String p = sc.nextLine();

		while(!(p.length() == 3 && p.charAt(0) == 'F' && p.charAt(1) == 'I' && p.charAt(2) == 'M')){
			if(Senha(p)) System.out.println("SIM");
			else System.out.println("NAO");
	
			p = sc.nextLine();
}

}



}
