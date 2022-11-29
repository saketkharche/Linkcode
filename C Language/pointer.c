
#include <stdio.h>
#include <stdlib.h>
            
int main() {
	
	int arr[5];
	int i;
	int *ptr=&arr[0];
	int sum=0;
	printf("\nEnter any five nos\n");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",ptr+i);
		sum=sum+*(ptr+i);
	}
	printf("\n---------------------------------------------------\n");
	for(i=0;i<5;i++)
	{
		printf("\n%5d",*(ptr+i));
	}
	printf("\n---------------------------------------------------\n");
	printf("\nElements in reverse order are\n");
	for(i=4;i>=0;i--)
	{
		printf("\n%5d",*(ptr+i));
		printf("\n");
		
	}
	
	printf("\n---------------------------------------------------\n");
	
	printf("\nAddition is : %d ",sum);
	
	return 0;
}
