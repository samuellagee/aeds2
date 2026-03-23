#include <stdio.h>
#include <stdlib.h>

//funçao que verifica as substrings e o tamanho delas
int comprimento(char p[]){
	int n = 0;
	while(p[n] != '\0') n++;

	int maior = 0;
	for(int i = 0; i < n; i++){
		int cont = 0;
		for(int j = i; j < n; j++){
			int repetiu = 0;
			for(int k = i; k < j; k++){
				if(p[j] == p[k]) repetiu = 1;
			}	
		if(repetiu == 0) cont++;
		else j = n;
		}
		if(cont > maior) maior = cont;
	}

	return maior;
}

int main(){
	char p[100];
	scanf(" %s", p);
	
	while(!(p[0] == 'F' && p[1] == 'I' &&  p[2] == 'M' && p[3] == '\0')){
	int resp = comprimento(p);	
	printf("%d\n", resp);
	scanf(" %s", p);
}
}
