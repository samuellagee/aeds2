#include <stdio.h>
#include <stdlib.h>

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
	scanf(" %s", s);

	while(!(s[0] == 'F' && s[1] == 'I' && s[2] == 'M')){
		char *resp = inverter(s);
		printf("%s\n", resp);
		scanf(" %s", s);
	}

	return 0;
}
