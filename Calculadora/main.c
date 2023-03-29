#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{

   double x, y, operacao, resultado;
   char adicao, subtracao, multiplicacao, divisao;
   char teste[50];

   printf("Qual operacao voce ira realizar?\n\n1 - ADICAO\n\n2 - SUBTRACAO\n\n3 - MULTIPLICACAO\n\n4 - DIVISAO\n\n");
   scanf("\n%lf", &operacao);

    printf("\nDigite o primeiro valor: ");
    scanf("%lf", &x);
    printf("\nDigite o segundo valor: ");
    scanf("%lf", &y);

 if (operacao == 1){
       resultado = x + y;
   }
    else if (operacao == 2){
        resultado = x - y;
    }
            else if (operacao == 3){
                resultado = x * y;
            }
                else {
                    resultado = x / y;
                }
    printf("\nO resultado e de :%.2lf\n\n", resultado);

    return 0;
}
