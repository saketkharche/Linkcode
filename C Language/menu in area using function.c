//menu using function using all  4 type
#include <stdio.h>
void factor();
int factorial();

int main(){
	int ch,n,result;
	
	printf("--------------------------MENU-----------------------------------------------");
	printf("\n1-Factor\n2-Factorial\n3-Power\n4-Prime\n5-Fibbo\n6-Reverse\n7-Palindrome");
	printf("\nEnter your choice\n");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1://without arrgument without return type;
			factor();
			break;
			
		case 2:
			printf("\nEnter any number for factorial");
			scanf("%d",&n);
			factorial(n);
			break;
			
					
		case 3:
			result=power();
			printf("\nResult is : %d",result);
			break;
			
					
		case 4:
			printf();
			break;
				
		case 5:
			
			break;
					
		case 6:
			
			break;
			
					
		case 7:
			
			break;
	}
	
	return 0;
}

void factor()
{
	int n;
	int i;
	
	printf("\nEnter any no ");
	scanf("%d",&n);
	
    printf("Factors of %d are: ", n);
	for (i=1;i<=n;i++) 
	{
        if (n%i==0) 
		{
            printf("%d ", i);
        }
    }
}

int factorial(int)
{
	
}
