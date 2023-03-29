#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
  int a, b, c, menor;

  printf("Primeiro valor: ");
  scanf("%d", &a);
  printf("Segundo valor: ");
  scanf("%d", &b);
  printf("Terceiro valor: ");
  scanf("%d", &c);

 menor = a;

 if(b < a){
    menor = b;
 }
 else {
    menor = c;
 }

  printf("MENOR = %d", menor);

    return 0;
}
