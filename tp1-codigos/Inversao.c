#include <stdio.h>
#include <stdlib.h>

//funçao declarada como ponteiro para retornar a string invertida, onde é criado uma nova string que armazena os caracteres da string lida do ultimo ao primeiro
char *inverter(char s[]){
	int n = 0;
	while(s[n] != '\0'){
		n++;
	}

	char *inv = (char*)malloc((n + 1)*sizeof(char));
	for(int i = 0; i < n; i++){
		inv[i] = s[n - 1 - i];
	}
	inv[n] = '\0';	
	return inv;
}	


int main(){
	char s[1000];
	scanf(" %[^\n]", s);

	while(!(s[0] == 'F' && s[1] == 'I' && s[2] == 'M')){
		char *resp = inverter(s);
		printf("%s\n", resp);
		scanf(" %[^\n]", s);
	}

	return 0;
}
