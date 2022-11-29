//
// Created by Saket on 24-09-2022.
//

#include <Geometric Shapes.h>
#include <stdio.h>

int main()
{
    int ch;

    do {
	    printf("\n--------------------------------MENU-------------------------------------\n");
    	printf("\n1-Area of Triangle\n2-Area of Circle\n3-Area of Rectangle\n4-Area of Square \n5-Area of Parallelogram\n6-Area of Trapezium\n7-Area of Ellipse\n");
    	printf("\n-----------------------------------------------------\n");
    	
		scanf("%d",&ch);
        switch (ch) 
		{
            case 1:
            	printf("\n-----------------------------------------------------\n");
                TriangleArea();
                printf("\n-----------------------------------------------------\n");
            break;

            case 2:
            	printf("\n-----------------------------------------------------\n");
                CircleArea();
                printf("\n-----------------------------------------------------\n");
            break;

            case 3:
            	printf("\n-----------------------------------------------------\n");
                RectangleArea();
                printf("\n-----------------------------------------------------\n");
			break;

            case 4:
            	printf("\n-----------------------------------------------------\n");
                SquareArea();
                printf("\n-----------------------------------------------------\n");
            break;

            case 5:
            	printf("\n-----------------------------------------------------\n");
                ParallelogramArea();
                printf("\n-----------------------------------------------------\n");
            break;

            case 6:
            	printf("\n-----------------------------------------------------\n");
                TrapeziumArea();
                printf("\n-----------------------------------------------------\n");
            break;

            case 7:
            	printf("\n-----------------------------------------------------\n");
                EllipseArea();
                printf("\n-----------------------------------------------------\n");
            break;
            
            case 8:
            	printf("\n-----------------------------------------------------\n");
        		printf("\nInvalid Choice...............\n");
        		printf("\n-----------------------------------------------------\n");
            break;
        }
		printf("\nDo you want to Continue press 1.......\n");
		scanf("%d",&ch);
    }while(ch==1);
    printf("\n------------------THANK YOU-------------------------------\n");

    return 0;
}
