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
    int search,flag;
    int ch;
    float amt;
    float rbal;

    struct Account Accarr[max];
    printf("\n Size of sturt is : %d ",sizeof(Accarr[i]));

    printf("\n1-")
    printf("\n How many account do you want to open \t : \t");
    scanf("%d",&n);

    for (i = 0; i < n ; i++)
    {
        printf("\nEnter Account number \n");
        scanf("%d",&Accarr[i].Accno);

        printf("\nEnter customer name \n");
        scanf("%s",&Accarr[i].cusName);

        printf("\nEnter Account bal \n");
        scanf("%f",&Accarr[i].Accbal);

        printf("\n-----------------------------------------------\n");
        printf("\n Account Number is : %d",Accarr[i].cusName);
        printf("\n Customer Name is : %d",Accarr[i].Accno);
        printf("\n Acoount Balanace is : %.2f",Accarr[i].Accbal);
        printf("\n-----------------------------------------------\n");


    }





    return 0;
}