#include <stdio.h>

int main() {
    int arr[] = {5, 3, 8, 6, 2, 7, 1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);  
    
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    printf("Mang sau khi sap xep theo thu tu tang dan: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

