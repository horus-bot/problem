#include <stdio.h>

int main() {
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int length = sizeof(arr)/sizeof(arr[0]);
    
    for ( int i=0; i<length ; i++){
        printf("%d, ",arr[i]);
    }
    int i;
    int max=arr[0];
    for( i=1;i < length;i++){
        if(arr[i]>max){
            max=arr[i];
            
        }
    }
    printf("%d is the max element of the array",max);
    }
    
