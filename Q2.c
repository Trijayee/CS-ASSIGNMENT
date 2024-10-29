#include <stdio.h>

int count(int arr[], int size, int value) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {1, 3, 3, 4, 2, 5, 2, 5, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int value;

    printf("Enter a value to count its occurrences: ");
    scanf("%d", &value);

    int occurrence = count(arr, size, value);
    printf("The value %d occured %d times in the array.\n", value, occurrence);

    return 0;
}
