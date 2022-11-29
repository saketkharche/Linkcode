//
// Created by Saket on 24-09-2022.
//

#ifndef GEOMATRIC_SHAPES_PROGRAM_AREA_FORMULA_H
#define GEOMATRIC_SHAPES_PROGRAM_AREA_FORMULA_H

#endif //GEOMATRIC_SHAPES_PROGRAM_AREA_FORMULA_H

#include <stdio.h>
//Area of triangle
void TriangleArea()
{
    float b , h ,ta;
    printf("/nEnter Area base and height of Triangle/n");
    scanf("%f%f",&b,&h);
    ta=(float)0.5*b*h;
    printf("/n Area of Triangle is : %f",ta);
}

//Area of circle
void CircleArea()
{
    float r ,ca;
    printf("/n Enter radius of circle/n");
    scanf("%f",&r);
    ca=(float)3.14*r;
    printf("/nArea of circle is : %f",ca);
}

//Area of Rectangle
void RectangleArea()
{
    float w , h , ra;
    printf("/n Enter width and height of Rectangle/n");
    scanf("%f%f",&w,&h);
    ra=(float)w*h;
    printf("/nArea of Rectangle is : %f",ra);
}

//Area of Square
void SquareArea()
{
    float s ,sa;
    printf("/n Enter side of Square/n");
    scanf("%f",&s);
    sa=(float)s*s;
    printf("/nArea of Square is : %f",sa);
}

//Area of Parallelogram
void ParallelogramArea()
{
    float b , h ,pa;
    printf("/n Enter Base and Height of Parallelogram/n");
    scanf("%f%f",&b,&h);
    pa=(float)b*h;
    printf("/nArea of circle is : %f",pa);
}

//Area of Trapezium
void TrapeziumArea()
{
    float w1 ,w2,h ,tra;
    printf("/n Enter Width 1 , Width 2 and Height of circle/n");
    scanf("%f%f%f",&w1,&w2,&h);
    tra=(float)0.5*(w1+w2)*h;
    printf("/nArea of Trapezium is : %f",tra);
}

//Area of Ellipse
void EllipseArea()
{
    float minor , major ,ea;
    printf("/n Enter Minor Axis And Manjor Axis of circle/n");
    scanf("%f%f",&minor,&major);
    ea=(float)3.14*minor*major;
    printf("/nArea of Ellipse is : %f",ea);
}

//Area of Sector
/*void SectorArea()
{
    float r,angle ,sea;
    printf("/n Enter radius  of Sector/n");
    scanf("%f",&r);

    printf("/n Enter center Angle of Sector/n");
    scanf("%f",&r);
    ca=(float)3.14*r;
    printf("/nArea of circle is : %f",ca);
}*/