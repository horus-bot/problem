#include <stdio.h>

int main() {
    int arr[] = {1,2,2,2,2,2,2,3,34,3,3,34,34,4,34,34,34,34,34,34,34,322233,3,3,3,3, 2, 3, 2, 4, 2, 5, 2};
    int length = sizeof(arr) / sizeof(arr[0]);
    int i, j, k;

    printf("Original array: ");
    for (i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for (i = 0; i < length; i++) {
        for (j = i + 1; j < length; j++) {
            if (arr[i] == arr[j]) {
                // Shift elements to the left
                for (k = j; k < length - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                length--;
                j--;
            }
        }
    }
     printf("the sorted array is ");
        for (int i=0;i<length;i++){
            printf("%d ",arr[i]);
        }
        return 0;
        
}
        
        
