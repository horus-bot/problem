#include <stdio.h>

int main() {
    int i,gcd, num2,num1;

    printf("enter your number");
    scanf("%d%d",&num1,&num2);

    for (i = 1;i<=num1 && i<=num2 ;++i){
        if( num1%i==0 && num2%i==0 ){
            gcd=i;
        }
    }
    printf("gcd of the numbers %d and %d is %d",num1,num2,gcd);
}
  
