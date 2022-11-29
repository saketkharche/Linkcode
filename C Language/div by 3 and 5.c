#include <stdio.h>
#include <stdlib.h>

int main() {
	float rs,usd,eur,rsusd,eurusd,inreur;
	int ch;
	
	area:
		
	printf("\n1-INR TO USD\n2-EUR TO USD\n3-INR TO EUR");
	printf("\nEnter your choice....");
	scanf("%d",&ch);
	/*inr=1;
	usd=(float)79.87;
	eur=(float)79.85;*/
	if(ch==1)
	{
		printf("Enter amount in Rs");
		scanf("%f",&rs);
		rsusd=rs/79.87;
		printf("\nUSD is : %f",rsusd);
	}
	else if(ch==2)
	{
		printf("\nEnter Amount in pound");
		scanf("%f",&eur);
		eurusd=eur/1;
		printf("\nUSD is : %f",eurusd);
	}
	else if(ch==3)
	{
	printf("\nEnter Amount in Rs");
		scanf("%f",&rs);
		inreur=rs/79.85;
		printf("\nEUR is : %f",inreur);
	}
	else 
	{
		printf("\nInvalid choice..");
	}
	
	printf("\nDO you want to continue press 1");
	scanf("%d",&ch);
	if(ch==1)
	{
		goto area;
	}
	printf("\nThank you....");
	return 0;
}
