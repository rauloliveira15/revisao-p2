#include <stdio.h>
#include <stdlib.h>

int numeroPerfeito (int num)
{
    int i, val, soma=0;
    for (i=1;i<num;i++) if (num % i == 0) soma+=i;
    if (soma == num){
        val = 1;
        return val;
    }else{
        val = 0;
        return val;
    }
}

int main()
{
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("\n\nResultado: %d\n\n", numeroPerfeito(num));
    return 0;
}
