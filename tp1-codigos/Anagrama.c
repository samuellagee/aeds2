#include <stdio.h>
#include <stdlib.h>

//ao comparar uma letra maiuscula com uma minuscula da diferente, mesmo que elas sejam a mesma letra, entao converto tudo para minuscula para comparar
char Minuscula(char s){
	char c = s;
	if(c >= 'A' && c <= 'Z'){
		c = c + 32;
}
	return c;
}

//comparo letra por letra da string 1 com letra por letra da string 2, substituo a letra igual com um '*' para na proxima rodagem do loop nao ser comparado novamente
int Anagrama(char s1[], char s2[]){
	int n1 = 0, n2 = 0;

	while(s1[n1] != '\0'){
		n1++;
	}
	while(s2[n2] != '\0'){
		n2++;
	}
	if(n1 != n2) return 0;

	char aux[1000];
    for(int i = 0; i <= n2; i++){
       	aux[i] = s2[i];
    }

	for(int i = 0; i < n1; i++){
		char c1 = Minuscula(s1[i]);
		int achou = 0;
		for(int j = 0; j < n1; j++){
			char c2 = Minuscula(aux[j]);
			if(achou == 0 && c1 == c2){
				aux[j] = '*';
				achou = 1;
			}
		}
		if(achou == 0) return 0;
	}
	return 1;
}

int main(){
	char s1[1000], s2[1000];
	
	while(scanf(" %s", s1) == 1 && !(s1[0] == 'F' && s1[1] == 'I' && s1[2] == 'M' && s1[3] == '\0')){
		scanf(" %s", s2);
		if(Anagrama(s1, s2) == 1) printf("SIM\n");
		else printf("NAO\n");
	}
	return 0;
}
