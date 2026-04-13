#include <stdio.h>
#include <stdlib.h>

//funçao recursiva que pula 3 caracteres validos de acordo com a entrada da questao, incrementando o i para os proximos caracteres na chamada da funçao
char *cifrada(char p[], int i){
	if(p[i] == '\0') return p;

	p[i] = p[i] + 3;
	return cifrada(p, i + 1);
}

int main(){
	char p[1000];	
	fgets(p, 1000, stdin);

	while(!(p[0] == 'F' && p[1] == 'I' && p[2] == 'M' && p[3] == '\n')){
		if(p[0] == '\n') printf("\n");
		else printf("%s\n", cifrada(p, 0));
		
		fgets(p, 1000, stdin);
	}

	return 0;
}

