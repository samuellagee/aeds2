#include <stdio.h>
#include <stdlib.h>

//para as funçoes vogais e consoantes verificarem
int vogal(char c) {
	return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

//para a funçao consoantes nao verificar numeros ou caracteres
int letra(char c) {
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

//chamada recursiva controlando o caracter da string pelo i com o caso base sendo o final da string e retorna
int soVogais(char s[], int i) {
	if (s[i] == '\0') return 1;
	if (!vogal(s[i])) return 0;
	return soVogais(s, i+1);
}

//verifica se tem vogais
int soConsoantes(char s[], int i) {
	if (s[i] == '\0') return 1;
	if (!letra(s[i]) || vogal(s[i])) return 0;
	return soConsoantes(s, i+1);
}

//verifica se é numero inteiro
int inteiro(char s[], int i) {
	if (s[i] == '\0') return 1;
	if (s[i] < '0' || s[i] > '9') return 0;
	return inteiro(s, i+1);
}

//verifica se é numero real
int real(char s[], int i, int sep) {
	if (s[i] == '\0') return 1;

	if (s[i] == '.' || s[i] == ',') {
		if (sep == 1) return 0;
		return real(s, i+1, 1);
	}

	if (s[i] < '0' || s[i] > '9') return 0;

	return real(s, i+1, sep);
}

int main() {
	char p[1000];

	scanf(" %[^\n]", p);

	while (!(p[0] == 'F' && p[1] == 'I' && p[2] == 'M' && p[3] == '\0')) {

		if (soVogais(p, 0)) printf("SIM ");
		else printf("NAO ");

		if (soConsoantes(p, 0)) printf("SIM ");
		else printf("NAO ");

		if (inteiro(p, 0)) printf("SIM ");
		else printf("NAO ");

		if (real(p, 0, 0)) printf("SIM\n");
		else printf("NAO\n");

		scanf(" %[^\n]", p);
	}

	return 0;
}
