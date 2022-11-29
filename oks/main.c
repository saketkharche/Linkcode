#include <stdio.h>
#include <stdlib.h>
//simple matric 2d array
 int main() {
     int mat[3][3];
     int i,j;
     printf("Enter any elemets in matrix");
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
             scanf("%d",&mat[i][j]);
         }
     }
     printf("\nMatrix1");
     for(i=0;i<3;i++)
     {
         for(i=0;j<3;j++)
         printf("\n%5d",mat[i][j]);
     }
     printf("\n");
     return 0;
 }
