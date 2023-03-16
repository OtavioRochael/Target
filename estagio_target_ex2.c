#include <stdio.h>
//EX 2

//Funcao recursiva
int fibonacci(int n) {
    if (n < 0) {
        return -1; //Zera o argumento ou obriga a iniciar em 1. Fibonacci nega os numeros negativos
    } else if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }

}

int is_fibonacci(int num) {
    int i = 0;
    while (fibonacci(i) <= num) {
        if (fibonacci(i) == num) {
            return 1;
        }
        i++;
    }
    return 0;
}

int main(){
    
    int num;
    printf("Digite um numero: "); scanf("%d", &num);
    if(is_fibonacci(num)){
        printf("%d pertence a sequencia de fibonacci\n", num);
    }
    else
        printf("%d nao pertence a sequencia de fibonacci\n", num);

    return 0;
}