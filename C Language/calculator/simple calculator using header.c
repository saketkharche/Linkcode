#include <stdio.h>   
#include <simplecalculator.h>//header file

  
int main()  
{  
    // declaration a local variable op;  
    int ch;  
    do  
    {  
        // displays the multiple operations of the Calculator  
        printf("\n-------------------------------Calculator--------------------------------------\n");
        printf (" Select an operation to perform the calculation  ");  
        printf (" \n 1 - Addition  \t \t 2 - Subtraction \n 3 - Multiplication \t 4 - Division \n 5 - Square \t \t 6 - Square Root \n 7 - Exit \n \n Make a choice ");      
          
        scanf ("%d", &ch); // accepts a numeric input to choose the operation  
      
      
    // use switch statement to call an operation  
    switch (ch)  
    {  
        case 1:  
            addition(); /* It call the addition() function  to add the given numbers */  
            break; // break the function  
              
        case 2:  
            subtract(); /* It call the subtract() function  to subtract the given numbers */  
            break; // break the function  
              
        case 3:  
            multiply(); /* It call the multiply() function  to multiply the given numbers */  
            break; // break the function  
              
        case 4:  
            divide(); // It call the divide() function  to divide the given numbers  
            break; // break the function  
              
        case 5:  
            sq(); // It call the sq() function  to get the square of given numbers  
            break; // break the function  
              
        case 6:  
            sqrt(); /* It call the sqrt1() function  to get the square root of given numbers */  
            break; // break the function  
              
        case 7:
			printf("\n---------------Thank You----------------\n") ;
            exit(0); // It call the exit() function  to exit from the program  
            break; // break the function  
              
        default:  
            printf("\n Please Enter Valid Choice!! \n");  
            break;                        
    }  
    printf (" \n \n ********************************************** \n ");  
    } while (ch != 7);  
      
  
    return 0;        
}  
