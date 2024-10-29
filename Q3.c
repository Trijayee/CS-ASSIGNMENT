#include <stdio.h>

void add(int arr1[], int arr2[], int final[], int size) {
    for (int i = 0; i < size; i++) {
        final[i] = arr1[i] + arr2[i];
    }
}

int main() {
    int size;
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int arr1[size], arr2[size], final[size];

    printf("Enter elements of arr1:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    printf("Enter elements of arr2:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    add(arr1, arr2, final, size);

    printf("Resultant array after addition:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", final[i]);
    }
    printf("\n");

    return 0;
}
