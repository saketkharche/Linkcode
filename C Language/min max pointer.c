#include <stdio.h>
#include <stdlib.h>
//Print min and max in array
int main() {
	int arr[10];
	int max;
	int min;
	int i;
	int *ptr;	
	ptr=&arr[0];

	
	printf("\nEnter any 10 elements in Array\n");
	for(i=0;i<10;i++);
	{
		scanf("%d",ptr+i);
	}
	max=*ptr;
	min=*ptr;
	
	printf("\n elements in array are using pointer");
	for(i=1;i<10;i++)
	{
		printf("%5d",*(ptr+i));
		if(*(ptr+i)>max)
		{
			max=*(ptr+i);
		}
		else if(*(ptr+i)<min)
		{
			min=*(ptr+i);
		}
	}
	printf("\nmax value is %d",max);
	printf("\nmin value is %d",min);
	return 0;
}
