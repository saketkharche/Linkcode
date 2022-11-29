//
// Created by Saket on 24-09-2022.
//

#include <geo.h>
#include <stdio.h>

int main()
{
    int ch;
    printf("/n-----------------MENU-----------------/n");
    printf("/n1-Area of Triangle/n2-Area of Circle/n3-Area of Rectangle/n4-Area of Square /n5-Area of Parallelogram/n6-Area of Trapezium/n7-Area of Ellipse");
    scanf("%d",&ch);

    do {
        switch (ch) {
            case 1:
                TriangleArea();
                break;

            case 2:
                CircleArea();
                break;

            case 3:
                RectangleArea();
                break;

            case 4:
                SquareArea();
                break;

            case 5:
                ParallelogramArea();
                break;

            case 6:
                TrapeziumArea();
                break;

            case 7:
                EllipseArea();
                break;


        }
        printf("/nDo you want to Continue press 1......./n");
        scanf("%d",&ch);
    }
    while(1);

    printf("/n ------------------THANK YOU-------------------------------");

    return 0;
}