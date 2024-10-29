#include <stdio.h>

int remover(int arr[], int size, int value) {
    int newSize = 0; 
    for (int i = 0; i < size; i++) {
        if (arr[i] != value) { 
            arr[newSize] = arr[i];
            newSize++;
        }
    }
    return newSize;
}

int main() {
    int arr[] = {10,20,-10,0,10,10,3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int value = 10;

    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    size = remover(arr, size, value);

    printf("Array after removing %d: ", value);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("New size : %d\n", size);

    return 0;
}
