#include <stdio.h>
#include <stdlib.h>

char *trocar(char f[], int n){
	char *f2 = (char*)malloc((n + 1)*sizeof(char));
	for(int i = 0; i < n; i ++){
		if(f[i] == '@') f2[i] = 'a';
		else if(f[i] == '&') f2[i] = 'e';
		else if(f[i] == '!') f2[i] = 'i';
		else if(f[i] == '*') f2[i] = 'o';
		else if(f[i] == '#') f2[i] = 'u';
		else f2[i] = f[i];
	}
	f2[n] = '\0';
	return f2;
}

int main(){
	char f[257];

	while(scanf(" %[^\n]", f) != EOF){
		int i = 0;
		int n = 0;
		while(f[i] != '\0'){
			n++;
			i++;
		}
		char *f2 = trocar(f, n);
        printf("%s\n", f2);
        free(f2);
	}

	return 0;
}
