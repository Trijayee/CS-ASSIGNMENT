#include <stdio.h>

int countg(int *arr, int size, int value) {
    int count = 0;
    
    for (int i = 0; i < size; i++) {
        if (*(arr + i) > value) {
            count++;
        }
    }
    
    return count;
}

int main() {
    int size, value;

    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size];

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value to compare: ");
    scanf("%d", &value);

    int count = countg(arr, size, value);

    printf("Number of elements greater than %d: %d\n", value, count);

    return 0;
}
