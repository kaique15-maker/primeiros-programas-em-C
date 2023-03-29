#include <stdio.h>
#include <stdlib.h>

int main()
{
    char life[50];
    int play, m, n, i, j;
    char mat[m][n];

    printf("Digite 1 para iniciar o jogo, ou, 2 para encerrar o programa: ");
    scanf ("%d", &play);

    if (play == 1) {
        printf("Para comecar digite a palavra desejada: ");
        for (i = 0; i < m; i++){
           for(i = 0; i < n; i++){
            scanf("%c", &mat[m][n]);
           }
        }

        printf(mat[1][5]);




    }
    else {
    }








    return 0;
}
