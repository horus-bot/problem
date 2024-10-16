#include <stdio.h>
int main(){
    int arr[]={34,54,65,723,65,865,45};
    int length = sizeof(arr)/sizeof(arr[0]);
    int i,j,temp;
    for (i=0;i<length-1;i++){
        for (j=0;j<length-i-1;j++){
            if (arr[j]<arr[j+1]){
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for (int i=0;i<length;i++){
        printf("%d ",arr[i]);
      
    }
    
     return 0;
}
