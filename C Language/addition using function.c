//circle and triangle area switch using function
#include <stdio.h>
#include <stdlib.h>

//fuction declaration
void circleArea();
void triangleArea();
void rectangleArea();

int main() 
{
	int ch;
	printf("hello...");
	
	do
	{//print menu for geometric area
	
		printf("\n1-Area of circle\n2-Area of triangle\n3- Area of rectangle");
		printf("\nEnter your choice....");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
					circleArea();
				break;
			
			case 2:
					triangleArea();
				break;
			case 3:
					rectangleArea();
				break;
				
			default :
				printf("\nInvalid choice....");
		}
		printf("\nDo you want to contiue press 1\n....\n");
		scanf("%d",&ch);
	}
	while(ch==1);
	
	printf("\n.......Thank you.......");
	return 0;
}

//function define for area of geometric shapes
void circleArea()
{
	float r,ca;
	printf("\nEnter radious of circle : \n");
	scanf("%f",&r);
	ca=(float)3.14*r*r;
	printf("\nArea of circle is : %.2f ",ca);
}

void triangleArea()
{
	float h,b,ta;
	printf("\nEnter breadth and height of triangle : \n");
	scanf("%f%f",&b,&h);
	ta=(float)0.5*b*h;
	printf("\nArea of triangle is : %.2f ",ta);
}

void rectangleArea()
{
	float l,w,ra;
	printf("\nEnter length and wide of rectangle : \n");
	scanf("%f%f",&l,&w);
	ra=(float)l*w;
	printf("\nArea of rectangle is : %.2f ",ra);
}

