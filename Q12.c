#include <stdio.h>

void sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void pairSum(int arr[], int size, int target) {
    sort(arr, size);

    int left = 0;
    int right = size - 1;

    printf("Pairs that sum to %d:\n", target);
    while (left < right) {
        int currentSum = arr[left] + arr[right];
        if (currentSum == target) {
            printf("(%d, %d)\n", arr[left], arr[right]);
            left++;
            right--;
        } else if (currentSum < target) {
            left++;
        } else {
            right--;
        }
    }
}

int main() {
    int arr[] = {1, 3, 2, 5, 4, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 6;

    pairSum(arr, size, target);

    return 0;
}
