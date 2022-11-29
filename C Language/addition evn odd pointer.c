#include <stdio.h>
#include <stdlib.h>


int main() 
{
    int arr[10];
    int i;
    int *ptr1=&arr[0];
    int totalsum=0;
    int even=0;
    int *ptr2=&even;
    int odd=0;
    int *ptr3=&odd;
    int oddsum=0;
    int evensum=0;
    
    printf("\nEnter any ten numbers\n");

    for(i=0;i<10;i++)
    {
        scanf("%d",ptr1+i);
        totalsum=totalsum+*(ptr1+i);
        
        if(arr[i]%2==0)
        {
            even=*(ptr2)+1;
            evensum=evensum+arr[i];
        }
       else
        {
            odd=*(ptr3)+1;
            oddsum=oddsum+arr[i];
        }
    }
    printf("\nElements in array are: ");

    for(i=0;i<10;i++)
    {
        printf("%5d",*(ptr1+i));
    }

    printf("\nsum of total number is : %d ",totalsum);
    printf("\nTotal even nos are : %d and sum of even nos is : %d ",even,evensum);
    printf("\nTotal odd nos are : %d and sum of odd nos is : %d",odd,oddsum);
    printf("\nAddress of array is :%u",ptr1);
    printf("\nAddress of even nos is :%u",ptr2);
    printf("\nAddress of odd nos is :%u",ptr3);

    return 0;

}