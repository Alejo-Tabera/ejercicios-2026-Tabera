#include <stdio.h>
int matriz[3][2][4];
int i,j,x;
int main()
{
   for(i=0;i<3;i++){
     for(j=0;j<2;j++){
         for(x=0;x<4;x++){
   printf("\n ingrese el valor que va a utilizar: ");
       scanf("%d",&matriz[i][j][x]);
       
   }  
    }   
     }

    return 0;
}

