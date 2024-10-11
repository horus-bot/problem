#include <stdio.h>

int main() {
    int i;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int length = sizeof(arr) / sizeof(arr[0]);

 
    printf("The elements of the array are:\n");
    for (int i = 0; i < length; i++) {
        printf("%d, ", arr[i]);
    }
    int max = arr[0];
    int secondMax = arr[-1];
    for (i=0;i<length; i++){
        if(max<arr[i])
        {
            secondMax=max;
            max=arr[i];
        }
        else if (secondMax>arr[i] && arr[i]!=max){
            secondMax=arr[i];
        }
    }
    printf("\n%d is the second largest element in the array",secondMax);
    return 0;
}
  
