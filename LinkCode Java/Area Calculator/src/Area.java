import java.util.Scanner;

public class Area {
	Scanner sc=new Scanner(System.in); //object of scanner

	
	
		public void circleArea()
		{
			
			System.out.println("Enter radius for circle.....");
			float r=sc.nextFloat();
			float ca=3.14f*r*r;
			System.out.println("Area of Circle is : "+ca);
					
		}
		public void triangleArea()
		{
			
		
		System.out.println("Enter height and base of triangle........... : ");
		float h=sc.nextFloat();
		float b=sc.nextFloat();
		
		float ta=0.5f*b*h;
		System.out.println("Area of Triangle : "+ta);
		}
	



	
}
