#include <stdio.h>

int main() {
    int arr[] = {3, 5, 7, 9, 2, 8, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int element, found = -1;

    printf("Nhap phan tu ban muon tim: ");
    scanf("%d", &element);

    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            found = i;  
            break;
        }
    }
    if (found != -1) {
        printf("Phan tu %d ton tai tai vi tri %d trong mang.\n", element, found);
    } else {
        printf("Phan tu %d khong ton tai trong mang.\n", element);
    }

    return 0;
}

