#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

maiusculaMinuscula(char *nome)
{
    int tam, i;
    tam = strlen(nome);
    for (i=0;i<tam;i++){
        if (i % 2 == 0){
            nome[i] = toupper(nome[i]);
        }else{
            nome[i] = tolower(nome[i]);
        }
    }
    printf("\n\n%s", nome);
}

int main()
{
    char palavra[40];
    printf("Digite um nome: ");
    gets(palavra);
    maiusculaMinuscula(palavra);
    return 0;
}
