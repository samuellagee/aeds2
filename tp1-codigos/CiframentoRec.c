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
	scanf(" %[^\n]", p);

	while(!(p[0] == 'F' && p[1] == 'I' && p[2] == 'M' && p[3] == '\0')){
		printf("%s\n", cifrada(p, 0));
		scanf(" %[^\n]", p);
	}

	return 0;
}

