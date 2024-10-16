#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};
    int l1 = sizeof(arr1) / sizeof(arr1[0]);
    int l2 = sizeof(arr2) / sizeof(arr2[0]);
    int mergedArray[l1 + l2];
    int i, j = 0;

    // Merging arr1 into mergedArray
    for (i = 0; i < l1; i++) {
        mergedArray[j++] = arr1[i];
    }
    
    // Merging arr2 into mergedArray
    for (i = 0; i < l2; i++) {
        mergedArray[j++] = arr2[i];
    }

    // Printing the merged array
    printf("Merged array: ");
    for (i = 0; i < l1 + l2; i++) {
        printf("%d ", mergedArray[i]);
    }
    printf("\n");

    return 0;
}
