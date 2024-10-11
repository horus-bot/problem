#include <stdio.h>
#include <stdbool.h>

int main() {
    int i, j,num ;
    bool prime;
 

    printf("enter your number");
    scanf("%d",&num);

    for (i = 2; i <= num; i++) {
        prime = true;
   

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
              prime = false;
            }
           break;
            }
        }
        if(prime){
            printf("%d is a prime number",num);
        }
        else{printf("%d is not a prime number",num);
    }
 
}
