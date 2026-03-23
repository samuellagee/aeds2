#include <stdio.h>
#include <stdlib.h>

//soma recursivamente, se tiver apenas um digito é o caso base, nao precisa de soma, se tiver mais de um digito, chama a funçao removendo o ultimo digito + ultimo digito
int soma(int n){
	if(n <= 9) return n;
	else return soma(n/10) + n%10;
}

//como na entrada a condiçao de parada é FIM, apos ler como um char e entrar no laço, converte a string para um numero inteiro, usando a tabela ASCII, pois o numero em forma de caracter subtraido do caracter '0' dara o valor do numero inteiro
int transformar(char p[]){
	int n = 0;
	int i = 0;
	while(p[i] != '\0'){
		n = n * 10 + (p[i] - '0');
		i++;
}

	return n;
}

int main(){
	char p[100];
	scanf(" %s", p);

	while(!(p[0] == 'F' && p[1] == 'I' && p[2] == 'M')){
		int n = transformar(p);
		
		printf("%d\n", soma(n));
		scanf(" %s", p);
	}

	return 0;
}
