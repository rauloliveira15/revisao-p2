#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int main()
{
    //Variáveis
    int VA[TAM], VB[TAM], VC[TAM];
    int i, aux;
    //Alimentando os vetores
    for (i=0;i<TAM;i++){
        printf("Digite o %d valor VA: ", i+1);
        scanf("%d", &VA[i]);
        printf("Digite o %d valor VB: ", i+1);
        scanf("%d", &VB[i]);
    }//Termina for
    aux = TAM-1; //Auxiliar recebe o valor da ultima posição do vetor
    //Somando o vetor A e B
    for (i=0;i<TAM;i++){
        if (i==0) VC[i] = VA[i]+VB[aux];// Garante que na primeira iteração a posicao de A seja somada com a ultima de B
        VC[i] = VA[i]+VB[aux-i]; //soma a segunda de A com a Penultima de B e assim sucessivamemte
    }//Termina for
    //Mostrar os vetores
    printf("\nVA = ");
        for (i=0;i<TAM;i++) printf("%4d", VA[i]);
    printf("\nVB = ");
        for (i=0;i<TAM;i++) printf("%4d", VB[i]);
    printf("\nVC = ");
        for (i=0;i<TAM;i++) printf("%4d", VC[i]);
    return 0;
}
