#include <stdio.h>
#include <string.h>
//EX 5

int main(){
    
    char string[100];
    
    printf("Digite uma frase ou palavra: ");
    fgets(string, 100, stdin);

    if(string[strlen(string)-1] == '\n') {  //Substitui o fim da linha pelo caracter \0 indicando final do arquivo
        string[strlen(string)-1] = '\0';
    }

    int j = strlen(string) - 1;

    for(int i=0; i< j; i++, j--){
        char temp = string[i];
        string[i] = string[j];
        string[j] = temp;
    }

    printf("A string invertida eh: %s\n", string);

    return 0;
}