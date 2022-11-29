#include <stdio.h>
#include <stdlib.h>
int main(){
	//details
	int id;
	char name[50];
	//earning
	int basic;
	int dearness;
	int rent;
	int coneyance;
	int medical;
	int special;
	//deduction
	float prof;
	float tax;
	float fund;
	//total
	float gross;
	float hand;
	
	printf("\nEnter employee id:-");
	scanf("%d",&id);
	
	printf("\nEnter employee name:-");
	scanf("%s",&name);	
	
	printf("\nEnter basic earning:-");
	scanf("%d",&basic);
	
	printf("\nEnter dearness allowance:-");
	scanf("%d",&dearness);
	
	printf("\nEnter rent allowance:-");
	scanf("%d",&rent);
	
	printf("\nEnter coneyance allowance:-");
	scanf("%d",&coneyance);
	
	printf("\nEnter medical allowance:-");
	scanf("%d",&medical);
	
	printf("\nEnter special allowance:-");
	scanf("%d",&special);
	
	//calculating gross salary
	gross=(float)basic+dearness+rent+coneyance+medical+special;
	prof=(float)gross*2/100;
	tax=(float)gross*4/100;
	fund=(float)gross*6/100;
	hand=(float)gross-prof-tax-fund;
	//display slip...
	printf("--------------------salary slip-----------------------");
	printf("\nemployee id\t\t\t:\t\t%d",id);
	printf("\nemployee name\t\t\t:\t\t%s",name);
	printf("\nbasic\t\t\t\t:\t\t%d",basic);
	printf("\ndearness allowance\t\t:\t\t%d",dearness);
	printf("\nrent allowance\t\t\t:\t\t%d",rent);
	printf("\nconeyance allowance\t\t:\t\t%d",coneyance);
	printf("\nmediacal allowance\t\t:\t\t%d",medical);
	printf("\nspecial allowance\t\t:\t\t%d",special);
	printf("\ngross salary\t\t\t:\t\t%.2f",gross);
	printf("\nprofessinal tax\t\t\t:\t\t%.2f",prof);
	printf("\ntax\t\t\t\t:\t\t%.2f",tax);
	printf("\nfund\t\t\t\t:\t\t%.2f",fund);
	printf("\nnet salary\t\t\t:\t\t%.2f",hand);
	printf("\n----------------------------------------------------");
	



return 0;
}