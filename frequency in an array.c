#include <stdio.h>
int main(){
    int arr[]={2,4,5,6,723,45,346,57,34,55,6767,34,2,2,2,2,2,2,2,2,2,2,2};
    int length = sizeof(arr)/sizeof(arr[0]);
    int element,freq=0;
    printf("enter the element of the array u want to know the frequency of");
    scanf("%d",&element);
    for ( int i=0;i<length-1;i++){
        if (arr[i]==element){
            freq++;
        }
    }
    for(int i=0;i<length-1;i++){
        printf("%d is the amount of times %d appeared in the array",freq,element);
        return 0;
    }
    
    
    return 0;
}
