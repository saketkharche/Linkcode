#include<stdio.h>

int main()
{
	int ch;
	int i;
	int x;
	int *n;
	do
	{
		p=malloc(sizeof(int));
		//runtime
		printf("\nhow many nos do you want ");
		scanf("%d",&x);
		n=(int*)malloc(sizeof(int)*x);
		printf("\nenter %d nos",x);
		for(i=0;i<x;i++)
		{
			scanf("%d",(n+i));
			
		}
		printf("\n Your nos are");
		printf("%d");
		printf("\n Your nos are");
		printf("\n Your nos are");		
	return 0;
}
