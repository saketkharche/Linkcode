#include <stdio.h>
#include <stdlib.h>

/*
int main() {
	
	char name[10];
	int i,l;
	int vcnt=0,ccnt=0;
	
	printf("\nEnter students name\n");
	scanf("%s",&name);
	l=0;
	for(i=0;name[i]!='\0';i++)//null
	{
		l++;
		if((name[i]=='a')||(name[i]=='e')||(name[i]=='i')||(name[i]=='i')||(name[i]=='o')||(name[i]=='u'))
		{
			vcnt++;
		}
		else
		{
			ccnt++;
		}
	}
	printf("\n vowels in name are %d \n",vcnt);
	printf("\n consonants in name are %d \n",ccnt);
	printf("\nlength of name is %d \n",l);
	
	printf("\nreverse name\n");
	for(i=l-1;i>=0;i--)
	{
		printf("%c",name[i]);
	}

	
	return 0;
}*/


//enter 2 string and concatenate

/*#include <stdio.h>
int main() {
  char s1[50] = "Saket ", s2[60] = "Kharche ";
  int len, j;

  // store 
  len = 0;
  while (s1[len]!='\0')
  {
    len++;
  }

  // concatenate s2 to s1
  for (j=0;s2[j]!='\0';j++,len++) 
  {
    s1[len] = s2[j];
  }

  // terminating the s1 string
  s1[len] = '\0';

  printf("After concatenation: ");
  puts(s1);

  return 0;
}*/


//enter any string check palindrome
/*#include <stdio.h>
int main(){
	char name[10];
	int i,j;
	int flag=1;
	
	printf("\nEnter your name\n");
	scanf("%s",&name);
	for(i=0;name[i]!='\0';i++);
	for(j=i-1,i=0;i<j;i++,j--)
	{
		if(name[i]!=name[j])
		{
			flag=0;
			break;
		}
	}
	if(flag)
	{
		printf("\nString is palindrome");
		
	}
	else
	{
		flag=0;
		printf("\nString is not palindrome");
	}
	
	return 0;
}*/



//enter any 2 string and copy the contents of 2nd string over 1st string


//enter 2 string and print a grater string
