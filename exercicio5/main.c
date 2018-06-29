#include <stdio.h>
#include <stdlib.h>

removeCarac (char *nome, char carac)
{
    int i, tam, posicao;
    tam = strlen(nome);
    for(i=0;i<tam;i++){
        if (nome[i]==carac){
            nome[i] = ' ';
        }
    }
    for (i=0, posicao=0;i<tam;i++,posicao++){
        if(nome[posicao]== ' '){
            posicao++;
        }
        nome[i] = nome[posicao];
    }
    printf("\n\n%s", nome);
}

int main()
{
    char nome[40];
    char c;
    printf("Digite um nome: ");
    gets(nome);
    fflush(stdin);
    printf("Digite uma letra: ");
    scanf("%c", &c);
    removeCarac(nome,c);
    return 0;
}
