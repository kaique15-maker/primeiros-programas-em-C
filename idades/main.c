#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
   void ler_texto(char *buffer, int length) {
 fgets(buffer, length, stdin);
 strtok(buffer, "\n");
}

void limpar_entrada() {
 char c;
 while ((c = getchar()) != '\n' && c != EOF) {}
}

int idade1, idade2;
char nome1[50], nome2[50];
double media;

    printf("Dados da primeira pessoa:\n");
    printf("Nome: ");
        gets(nome1);
    printf("Idade: ");
        scanf("%d", &idade1);
    printf("Dados da segunda pessoa:\n ");
    printf("Nome: ");
    fseek(stdin, 0, SEEK_END);
        gets(nome2);
    printf("Idade: ");
        scanf("%d", &idade2);

media = (double)(idade1 + idade2) /2;

    printf("A idade media de %s, e %s, e de %.1lf anos\n", nome1, nome2, media);





}
