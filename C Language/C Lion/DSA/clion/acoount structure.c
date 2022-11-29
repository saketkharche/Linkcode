//
// Created by Saket on 02-11-2022.
//

#include <stdio.h>
#define max 20

struct Account
{
    int Accno;
    char cusName[50];
    float Accbal;
};

int main()
{
    int n,i;
    struct Account Accarr[max];
    printf("\n Size of sturt is : %d ",sizeof(Accarr[i]));

    printf("\n How many account do you want to open \t : \t");

    for (i = 0; i < n ; i++)
    {
        printf("\nEnter Account number \n");
        scanf("%d",&Accarr[i].Accno);

        printf("\nEnter customer name \n");
        scanf("%s",&Accarr[i].cusName);

        printf("\nEnter Account bal \n");
        scanf("%f",&Accarr[i].Accbal);

        printf("-----------------------------------------------");
        printf("\n Account Number is : %d",Accarr[i].cusName);
        printf("\n Customer Name is : %d",Accarr[i].Accno);
        printf("\n Acoount Balanace is : %.2f",Accarr[i].Accbal);
        printf("\n Size of sturt is : %d ",sizeof(Accarr[i]));
        printf("-----------------------------------------------");


    }
    return 0;
}