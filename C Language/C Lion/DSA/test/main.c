#include <stdio.h>
int sum();
int main() {
    printf("Hello, World!\n");
    sum();
    return 0;
}

int sum(int a ,int b ,int c){
    //int a,b,c;
    printf("enter two nos \n ");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("sum of number is : %d",c);
}