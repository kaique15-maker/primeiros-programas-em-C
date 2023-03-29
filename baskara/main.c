#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{

    double a, b, c, x1, x2, delta;

    printf("Coeficienta A: ");
        scanf("%lf", &a);
    printf("Coeficiente B: ");
        scanf("%lf", &b);
    printf("Coeficiente C: ");
        scanf("%lf", &c);

    delta = b * b - 4*a*c;

       if (a == 0 || delta < 0) {
           printf("Esta equacao nao possui raizes reais");
       }
       else{
        x1 = (-b +sqrt(delta))/ (2*a);
        x2 = (-b -sqrt(delta)) / (2*a);

    printf("X1 = %.4lf\n", x1);
    printf("X2 = %.4lf\n", x2);
       }

    return 0;

}
