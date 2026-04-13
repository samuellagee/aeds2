#include <stdio.h>
#include <stdlib.h>

//soma recursivamente, se tiver apenas um digito é o caso base, nao precisa de soma, se tiver mais de um digito, chama a funçao removendo o ultimo digito + ultimo digito
int soma(int n){
	if(n <= 9) return n;
	else return soma(n/10) + n%10;
}

int main(){
	int num;

	while(scanf("%d", &num) != EOF){
		printf("%d\n", soma(num));
	}

	return 0;
}
