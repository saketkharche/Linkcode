#include<stdio.h>    
#include<stdlib.h> 
#define max 20 
int main(){  
    int mat1[max][max],mat2[max][max],mat3[max][max]={0};
    int i,j,k;
    int c1,c2,r1,r2;
    int flag=0;
    printf("How many row and col do you want in matrix 1\n");
    scanf("%d%d",&r1,&c1);
    printf("How many row and col do you want in matrix 2\n");
    scanf("%d%d",&r2,&c2);
    
	if(c1==r2)
	{
		flag=1;

	printf("Enter elements in matrix 1\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}
	printf("Enter elements in matrix 2\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&mat2[i][j]);
		}
	}
	//multiplication
	for(i=0;i<r1;i++)
	{
		for(k=0;k<c2;k++)		
		{
			for(j=0;j<r2;j++)		//c1 or r2 can be use 
			{
				mat3[i][k]=mat3[i][k]+mat1[i][j]*mat2[j][k];
			}
		}
	}
	printf("\n ------------------MATRIX MULTIPICATION----------------------\n");
	for(i=0;i<r1;i++)
	{
		for(k=0;k<c2;k++)
		{
			printf("%5d",mat3[i][k]);
		}
		printf("\n");
	}
}
else
{
	printf("\nMULTIPLICATION NOT POSSIBLE");
}
    return 0;  
    }  
