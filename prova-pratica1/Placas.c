#include <stdio.h>
#include <stdlib.h>

void Placa(char p[]){
	int a = 0;
	int m = 0;

	for(int i = 0; i < 7; i++){
		if(i < 3 && p[i] >= 'A' && p[i] <= 'Z'){
			a++;
		}
		else if(i >= 3 && p[i] >= '0' && p[i] <= '9'){
			a++;
		}
	}

	for(int i = 0; i < 7; i++){
		if((i < 3 || i == 4) && p[i] >= 'A' && p[i] <=  'Z'){
			m++;
		}
		else if((i == 3 || i > 4) && p[i] >= '0' && p[i] <= '9'){
			m++;
		}
	}


	if(a == 7){
		printf("A\n");
	}
	else if(m == 7){
		printf("M\n");
	}else printf("I\n");
}


int main(){
	int n;
	scanf("%d", &n);

	char p[8];
	for(int i = 0; i < n; i++){
		scanf(" %[^\n]", p);
		int nn = 0;
		while(p[nn] != '\0'){
			nn++;
		}

		if(nn != 7){
			printf("I\n");
		}
		else Placa(p);
	}

	return 0;
}
