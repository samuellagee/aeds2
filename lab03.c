#include <stdio.h>

void imprime(int *vet, int n){
    for(int i = 0; i < n; i++){
        printf("%d\n", vet[i]);
    }
}

void swap(int *vet, int i, int j){
    int temp = vet[i];
    vet[i] = vet[j];
    vet[j] = temp;
}

void ordenar(int *vet, int n, int m){

    for(int i = 0; i < n; i++){
        scanf("%d", &vet[i]);
    }

    for(int i = 0; i < n-1; i++){
        int menor = i;

        for(int j = i+1; j < n; j++){

            if(vet[menor] % m > vet[j] % m){
                menor = j;
            }

            else if(vet[menor] % m == vet[j] % m){

                if(vet[menor] % 2 == 0 && vet[j] % 2 != 0){
                    menor = j;
                }

                else if(vet[menor] % 2 != 0 && vet[j] % 2 != 0){
                    if(vet[menor] < vet[j]){
                        menor = j;
                    }
                }

                else if(vet[menor] % 2 == 0 && vet[j] % 2 == 0){
                    if(vet[menor] > vet[j]){
                        menor = j;
                    }
                }

            }
        }

        swap(vet, i, menor);
    }

    imprime(vet, n);
}

int main(){

    int n, m;

    scanf("%d %d", &n, &m);

    while(n != 0 && m != 0){

        int vet[n];

        ordenar(vet, n, m);

        scanf("%d %d", &n, &m);
    }

}

