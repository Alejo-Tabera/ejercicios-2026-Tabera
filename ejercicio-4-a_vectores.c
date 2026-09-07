#include <stdio.h>
int vector1[5], vector2[5];
int x;
int main()
{
printf("Coloca tus 5 valores para el primer vector:\n");
for (x = 0; x < 5; x++)
{
   scanf("%d", &vector1[x]);
}
printf("Coloca tus 5 valores para el segundo vector:\n");
for (x = 0; x < 5; x++)
{
   scanf("%d", &vector2[x]);
}
for (x = 0; x < 5; x++)
{
   if(vector1[x] > vector2[x])
   {
     printf("valor %d: %d(del vector1) es mayor que %d(del vector2)\n",x,vector1[x],vector2[x]); 
   } 
   else if(vector1[x] < vector2[x])
   {
    printf("valor %d: %d(del vector1) es menor que %d(del vector2)\n",x,vector1[x],vector2[x]);   
   } 
   else
   {
        printf("valor %d: %d(del vector1) es igual a %d(del vector2)\n",x,vector1[x],vector2[x]); 
   } 
}
    return 0;
}
