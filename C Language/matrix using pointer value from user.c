#include<stdio.h>
//pointer using enter value,display;

int main()
{
    int i, j, m, n;
    int mat1[10][10];
    int mat2[10][10];
	int *ptr1=&mat1[0][0];
	int *ptr2=&mat2[0][0];
    printf("Enter number of rows : ");
    scanf("%d", &m);
    printf("Enter number of columns : ");
    scanf("%d", &n);
//input
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("Enter element in [%d][%d]: ",i,j);
            scanf("%d", (ptr1+i+j));
        }
    }
    
//addition

//display
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("%d\t", *(ptr2+i)+j);
        }
        printf("\n");
    }

    return 0;
}
/*#include<stdio.h>   

#include<stdlib.h>

#define max 20

int main(){ 

    int mat1[max][max],mat2[max][max],mat3[max][max]={0};

    int i,j,k;

    int c1,c2,r1,r2;

	int *ptr1=&mat1[0][0];
	int *ptr2=&mat2[0][0];
	int *ptr3=&mat3[0][0];
	
    int flag=0;
//input
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

                              scanf("%d",(ptr1+i+j));

                    }

          }

          printf("Enter elements in matrix 2\n");

          for(i=0;i<r2;i++)

          {

                    for(j=0;j<c2;j++)

                    {

                              scanf("%d",(ptr2+i+j));

                    }

          }

          //multiplication

          for(i=0;i<r1;i++)

          {

                    for(k=0;k<c2;k++)                  

                    {

                              for(j=0;j<r2;j++)            //c1 or r2 can be use

                              {

                                        *(ptr3+i+j)=(*(ptr3+i)j)+(*(ptr1+i)j)*(*(ptr2+i)j)

                              }

                    }

          }

          printf("\n ------------------MATRIX MULTIPICATION----------------------\n");

          for(i=0;i<r1;i++)

          {

                    for(k=0;k<c2;k++)

                    {

                              printf("%5d",*ptr3);
                              ptr3++;

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
*/
