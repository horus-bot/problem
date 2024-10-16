#include <stdio.h>
int main(){
    int arr[]={2,4,5,6,723,45,346,57,34,55,6767,34};
    int length =sizeof(arr)/sizeof(arr[0]);
    int i,j,temp;
    for (i=0;i<length-1;i++){
        for (j=0;j<length-i-1;j++){
            if (arr[j]>arr[j+1]) {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<length;i++ ){
        printf("%d ",arr[i]);
    }
    return 0;
}
