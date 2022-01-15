#include<stdio.h>

void main(){
    int a=0,b=0;
    
    // Take input from the user.
    printf("Enter Num0: ");
    scanf("%d",&a);
    printf("Enter Num1: ");
    scanf("%d",&b);
    
    // Print result of adder function
    printf("Result: %d",adder(a,b));
    printf("\n");
}

int adder(int Num0,int Num1) {
    return Num0+Num1;
}