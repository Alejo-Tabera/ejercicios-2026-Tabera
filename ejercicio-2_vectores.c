#include <stdio.h>
int vector[5];
int x, j;
int suma;
int promedio;

int main()
{
printf("Coloca tus 5 valores:\n");
for (x = 0; x < 5; x++)
{
   scanf("%d", &vector[x]);
}
for (x = 0; x < 5; x++)
{
   suma+= vector[x];
}
promedio= suma/5;
 
 printf("\n la suma total es: %d", suma);
  printf("\n el valor promedio es: %d", promedio);
    return 0;
}
