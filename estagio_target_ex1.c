#include <stdio.h>
//EX 1

int main(){
    
    int INDICE = 13, SOMA = 0, K = 0;

    while(K < INDICE){
        K++;
        SOMA += K;
    }

    printf("%d", SOMA);
    
    return 0;
}