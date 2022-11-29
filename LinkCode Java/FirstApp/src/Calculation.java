import java.util.Scanner;
public class Calculation {

	public static void main(String[] args)
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter height of triangle : ");
		float h=sc.nextFloat();
		System.out.println("Enter base of triangle : ");
		float b=sc.nextFloat();
		
		float ta=0.5f*b*h;
		System.out.println("Area of Triangle : "+ta);
	}
	

}
