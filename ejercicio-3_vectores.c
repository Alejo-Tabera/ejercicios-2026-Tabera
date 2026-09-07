#include <stdio.h>
int vector[5];
int x;
int opcion;

int main()
{
printf("Coloca tus 5 valores:\n");
for (x = 0; x < 5; x++)
{
   scanf("%d", &vector[x]);
}
do
{
    printf("ingrece variable que quiere ver:\n");
     scanf("%d", &opcion);
     
     if(opcion>0 && opcion<6)
     {
       printf("el valor de la opcion elegida es: %d\n", opcion, vector[opcion]);  
       
     } else
     printf("opcion invalida, vuelva a ingresar una opcion\n");
     scanf("%d", &opcion);
     
     }while(opcion != 0);
     
      return 0;
} 
