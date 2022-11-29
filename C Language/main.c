#include <stdio.h>  
#include <string.h>  

struct student  
{	
	
	int rollno;
	char name[10];
	float perct;
};

int main()
{
	int i;
	
	struct student stud[3];
	for(i=0;i<3;i++)
	{
	
	printf("\n Enter Roll no of student\n");
	scanf("%d",&stud[i].rollno);
	
	printf("\n Enter Name of student\n");
	scanf("%s",&stud[i].name);

	printf("\n Enter Percentage of student\n");
	scanf("%f",&stud[i].perct);
	
	printf("\n-----------------------------------------------\n");
	
	printf("\n Roll No : %d \n",stud[i].rollno);
	printf("\n Name of Student : %s\n",stud[i].name);
	printf("\n Percentage of student% : %.2f\n",stud[i].perct);
	printf("\n---------------------------------------------\n");
	}
	return 0;
}
