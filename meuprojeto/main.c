#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

double largura, comprimento, metro, area, preco;

    printf("Digite a largura do terreno: ");
    scanf("%lf", &largura);
    printf("Digite o comprimento do terreno: ");
    limpar_entrada();
    scanf("%lf", &comprimento);
    printf("Digite o valor do metro quadrado: ");
    limpar_entrada();
    scanf("%lf", &metro);

area = largura * comprimento;
preco = area * metro;

    printf("area do terreno: %.2lf\n", area);
    printf("Preco do terreno: %.2lf\n", preco);




return 0;
}
