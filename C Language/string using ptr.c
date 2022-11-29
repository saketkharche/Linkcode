#include <stdio.h>
#include <stdlib.h>


int main() {
	char name[10];
	char *ptr;
	int l=0,i;
	printf("\n Enter any name\n");
	scanf("%s",name);
	ptr=&name[0];

	for(i=0;*(ptr+i)!='\0';i++)
	{
		l++;
		if(((*ptr+i)>=65)&&(*(ptr+i)<=90))
		{
			printf("%c",(*(ptr+i)+32));
		}
		else
		{
			printf("%c",*(ptr+i));
		}
	}
	printf("\n\nreverse name\n");
	for(i=l;i>=0;i--)
	{
		printf("%c",*(ptr+i));
	}
	return 0;
}
