#include<stdio.h>
//pointer using enter value,display;

int main()
{
    int i, j, m, n;
    int mat[10][20];
	int *ptr=&mat[0][0];
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
