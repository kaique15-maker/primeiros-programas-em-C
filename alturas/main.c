#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, cont;
    double media, mediaCont;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &n);

char nome[n][50];
int idade[n];
double altura[n];


    for (int i = 0; i < n; i++){
        printf("dados da %da pessoa: \n", i+1);
        printf("Nome: ");
        fseek(stdin,0, SEEK_END);
        gets(nome[i]);
        printf("Idade: ");
        scanf("%d", &idade[i]);
        printf("Altura: ");
        scanf("%lf", &altura[i]);
    }

 media = 0;

    for (int i = 0; i < n; i++){
        media = media + altura[i];
    }

    printf("\nAltura media: %.2lf\n", media /n);
cont = 0;
    for (int i = 0; i < n; i++){
        if (idade[i] < 16){
            cont = cont +1;
        }
    }

    mediaCont = (cont * 100.0) / n;

    printf("Pessoas com menos de 16 anos: %.1lf%%\n", mediaCont);

    for (int i = 0; i < n; i++){
        if (idade[i] < 16){
            printf("%s\n", nome[i]);
        }
    }




    return 0;
}
