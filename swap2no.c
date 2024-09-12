// Online C compiler to run C program online
#include <stdio.h>

int main() {
   float a,b,c;
   printf("enter the value of the first number ");
   scanf("%f",&a);
   printf("enter the value of the second number ");
   scanf("%f",&b);
   c=b;
   b=a;
   a=c;
   printf("swapped numbers are %f:",a);
   printf("swapped numbers are %f:",b);
   
}
