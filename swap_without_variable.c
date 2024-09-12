// Online C compiler to run C program online
#include <stdio.h>

int main() {
   float a,b;
   printf("enter the value of the first number ");
   scanf("%f",&a);
   printf("enter the value of the second number ");
   scanf("%f",&b);
   a=a+b;
   b=a-b;
   a=a-b;
   printf("swapped numbers are %f:",a);
   printf("swapped numbers are %f:",b);
   
}
