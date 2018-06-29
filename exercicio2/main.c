#include <stdio.h>
#include <stdlib.h>

divisores (int x)
{
    if (x < 0){
        printf("Digite um valor positivo");
        return 0;
    }
    int qtd = 0;
    int i, aux = 0;
    int v[x];
    for (i=1;i<=x;i++){
        if (x % i == 0){
            qtd++;
            v[aux] = i;
            aux++;
        }
    }
    printf("\n\nQuantidade de divisores exatos de %d = %d", x, qtd);
    printf("\n\nDivisores = ");
    for (i=0;i<aux;i++) printf("%5d", v[i]);
}

int main()
{
    int n;
    printf("Digite um valor inteiro positivo: ");
    scanf("%d", &n);
    divisores(n);
    return 0;
}
