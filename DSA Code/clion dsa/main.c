#include<stdio.h>

int main()
{
    int ch;
    int *p;

    do
    {
        p=malloc(sizeof(int));
        printf("\nENTER ANY NO\n");
        scanf("%d",p);
        printf("\n\nYOU NO IS : %d",*p);
        printf("\nDo you want to continue prsss 1........\t\t");
        scanf("%d",&ch);

    }while(ch==1);
    return 0;
}