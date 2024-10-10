#include <stdio.h>

int main() {
    int num,i,product ;
    printf("enter the number you want the table");
    scanf("%d",&num);
    for(i=1;i<=10;i++){
        product=num*i;
        printf("%d*%d=%d\n",num,i,product);
        
    }
    


    return 0;
}
