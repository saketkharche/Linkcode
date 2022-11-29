#include <stdio.h>
#include <stdlib.h>

void factor();
void factorial();
void fibbonic();
void prime();
void reverse();
void neon();
void palindrome();
void power();
void evenodd();
void root();

int main() {
	
	int ch,n,result,rev;
	
	do{
		printf("\n--------------------------------MENU-------------------------------------\n");
    	printf("\n1-factor\n2-factorial\n3-fibbonic\n4-prime\n5-reverse\n6-neon\n7-palindrome\n8-power\n9-evenodd\n10-root\n");
    	printf("\n-----------------------------------------------------\n");
		scanf("%d",&ch);
		
        switch (ch) 
        {
        	case 1 :
        		factor();
        	break;
        	
        	case 2:
        		factorial();
        	break;
        	
        	case 3:
        		fibbonic();
        	break;
        	
        	case 4:
        		prime();		
        	break;
        	
        	case 5:
        		reverse();
        	break;
        	
        	case 6:
        		neon();
        	break;
        	
        	case 7:
        		palindrome();
        	break;
        	
        	case 8:
        		power();
        	break;
        	
        	case 9:
        		
        	break;
        	
        	case 10:
        		
        	break;
        	
        	default :
        		printf("\nInvalid choice.....");
		}
	}
	while(ch==1);
	return 0;
}

//function for factor 
void factor()
{
	int n, i;
    printf("Enter any number: ");
    scanf("%d", &n);
    for (i=1;i<=n;i++) {
        if (n%i==0) 
		{
    		printf("\nFactors of %d are: ", n);
            printf("%2d ", i);
        }
    }

}

//function for factorial
void factorial()
{
	int i,fact=1,n;    
 	printf("Enter a number: ");    
  	scanf("%d",&n);    
    for(i=1;i<=n;i++)
	{    
      fact=fact*i;    
  	}	    
  	printf("Factorial is %d",fact); 
}

//function for fibbonic
void fibbonic()
{
	
	int i, n;
	int t1 = 0, t2 = 1;
	int nextTerm = t1 + t2;

  
 	printf("Enter the number of terms: ");
  	scanf("%d", &n);

  	printf("Fibonacci Series: %d, %d, ", t1, t2);
 
  	for (i=3;i<=n;i++)
	{
    printf("%d, ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }
	
}
//function for prime
void prime()
	{
	
	int n, i, flag = 0;
  	printf("Enter a positive integer: ");
  	scanf("%d", &n);

  	if (n==0||n==1)
    	flag = 1;

  	for(i=2;i<=n/2;i++)
	   {

   		 if (n % i == 0) {
      		flag = 1;
      	break;
    }
  }

  	if (flag == 0)
    printf("%d is a prime number.", n);
  	else
    printf("%d is not a prime number.", n);
}


//function for reverse
void reverse()
{
	int n, reverse=0, rev;    
	printf("Enter a number: ");    
  	scanf("%d", &n);    
  	while(n!=0)    
  	{    
    	rev=n%10;    
     	reverse=reverse*10+rev;    
     	n/=10;    
  	}    
  	printf("Reversed Number: %d",reverse);  
}

//neon
void neon()
{
	
	int num, digit, sum =0;
    
    printf("Enter a number to check for neon number: \n");
    scanf("%d",&num);
        
    int square = num*num;
    
    while(square!=0){
        digit = square%10;
        sum += digit;
        square = square/10;
    }
    
    if(sum == num)
        printf("Neon Number \n");
    else
        printf("Not a Neon Number \n");
}

//palindrome
void palindrome()
{
	int n,r,sum=0,temp;    
	printf("enter the number=");    
	scanf("%d",&n);    
	temp=n;    
	while(n>0)    
		{    
			r=n%10;    
			sum=(sum*10)+r;    
			n=n/10;    
		}    
		if(temp==sum)    
		printf("palindrome number ");    
		else    
		printf("not palindrome");   
		
}

//power

void power()
{
	int base, exp;  
	int result; 
	printf (" Enter the base value : ");  
	scanf (" %d", &base);  
	printf (" Enter the power value for raising the power of base: ");  
	scanf (" %d", &exp); 
	result=pow(base,exp);  
	printf (" %d to the power of %d is = %d ", base, exp, result);  

	
}

//oddeven
void oddeven()
{
	
}
