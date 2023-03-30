#include <stdio.h>
#include <stdlib.h>

int main()
{
int n, i;
double soma;
double media;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

double vet[n];
soma = 0;

    for (i = 0; i < n; i++){
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
        soma = soma + vet[i];
    }
    printf("\nVALORES: ");
    for (i = 0; i < n; i++){
        printf("%.1lf ", vet[i]);
    }
    media = soma / n;
    printf("\nSOMA : %.2lf\n", soma);
    printf("MEDIA: %.2lf", media);



    return 0;
}
