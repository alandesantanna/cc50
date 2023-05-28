#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("LOJA DE CARROS USADOS \n");
    printf("MEDIA PONDERADA DE CARROS EM UMA LOJA \n");
    
    float a1, a2, a3;
    
    printf("Ano de fabrica entre 2000 e 2004: \n");
    scanf("%f", &a1);
    printf("Ano de fabrica entre 2005 e 2009: \n");
    scanf("%f", &a2);
    printf("Ano de fabrica entre 2010 e 2014: \n");
    scanf("%f", &a3);

    float carros[3];

    for( int i = 0 ; i <=2 ; i++ ){
        printf("Digite o valor: \n");
        scanf("%f", &carros[i]);
    }

    float media = ( (a1*carros[0]) + (a2*carros[1]) + (a3*carros[2]) ) / (a1+a2+a3);

    printf("A media ponderada é %.2f", media);
}