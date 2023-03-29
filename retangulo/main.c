#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){

  void ler_texto(char *buffer, int length) {
 fgets(buffer, length, stdin);
 strtok(buffer, "\n");
}

void limpar_entrada() {
 char c;
 while ((c = getchar()) != '\n' && c != EOF) {}
}

double base, altura, area,perimetro, diagonal;

    printf("Base do retangulo: ");
        scanf("%lf", &base);
    printf("Altura do retangulo: ");
        scanf("%lf", &altura);

area = base * altura;
perimetro = 2*(altura + base);
diagonal = sqrt(pow(base, 2.0)+ pow(altura, 2.0));

    printf("AREA = %.4lf\n", area);
    printf("PERIMETRO = %.4lf\n", perimetro);
    printf("DIAGONAL = %.4lf\n", diagonal);

}

