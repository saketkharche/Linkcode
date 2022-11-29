#include <stdio.h>
#include <stdlib.h>
//Enter any 10 number and print sum of all the number
int main() {
	int arr[10];
	int i;
	int sum=0;
	int totalsum=0;
	int even=0;
	int odd=0;
	int evensum=0;
	int oddsum=0;
	printf("\nEnter any ten numbers");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
		totalsum=sum+arr[i];
		if(arr[i]%2==0)		
		{
			even=even+1;
			evensum=evensum+arr[i];
			
		}
		else
		{
			odd=odd+1;
			oddsum=odd+arr[i];
			
		}

	}
	printf("\nsum of first ten nos is : %d",totalsum);
	printf("\ntotal even nos are: %d and sum nos is : %d",even,evensum);
	printf("\ntotal odd nos are: %d and sum nos is : %d",odd,oddsum);
	return 0;
}

