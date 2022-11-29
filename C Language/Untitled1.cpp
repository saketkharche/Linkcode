#include<stdio.h>
//pointer using enter value,display

int main()
{
    int i, j, m, n;
    int mat1[10][10];
    int mat2[10][10];
	int *ptr1=&mat1[0][0];
	int *ptr1=&mat2[0][0];
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
            scanf("%d", (ptr+i+j));
        }
    }
    
//addition

//display
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("%d\t", *(ptr+i)+j);
        }
        printf("\n");
    }

    return 0;
}