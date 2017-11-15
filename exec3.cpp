#include<stdio.h>
#include<conio.h>
#include <stdlib.h>

int main (void ) {

    int totalElementos = 3;
    int matriz[totalElementos][totalElementos];

    printf ("\n Digite valor para os elementos da matriz \n\n");

    for (int i = 0; i < totalElementos; i++ )
        for (int j = 0; j < totalElementos; j++ ) {
           printf ("\n Elemento [%d][%d] = ", i, j);
           scanf ("%d", &matriz[ i ][ j ]);
        }
    }

    printf("\n\n ----------- Matriz ----------------- \n\n");

    for (int k = 0; k < totalElementos; k++ ) {
        for (int l = 0; l < totalElementos; l++ ) {
            printf ("\n Elemento [%d][%d] = %d\n", k, l, matriz[ k ][ l ]);
        }
    }

    printf("\nA media: %f\n", media_matriz(totalElementos, matriz));
    printf("\nO maior elemento da matriz eh %.1f\n", maior_matriz(totalElementos, matriz));
    printf("\nA soma dos elementos da diagonal principal e: %.1f \n", soma_diagonal_matriz(matriz));

    getch();
    return(0);
}

float media_matriz(int n, float mat[3][3]) {
    // variaveis
    int i, j;
    float soma = 0.0, media = 0.0;

    // processamento
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            soma += mat[i][j];
        }
    }

    media = soma/ ((float)n * (float)n);

    // saida
    return(media);
}

float maior_matriz(int totalElementos, float x[3][3]) {
   maior = x[0][0];
   int i, j;

   for(i=0; i <= totalElementos; i++) {

       for(j=0; j <= totalElementos; j++) {
            if(maior < x[i][j]) {
                maior = x[i][j];
            }
        }
    }

    // saida
    return(maior);
}

float soma_diagonal_matriz(x[3][3]) {

    soma_diagonal = x[0][0] + x[1][1] + x[2][2];
    // saida
    return(soma_diagonal);
}