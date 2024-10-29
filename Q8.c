#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selecSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int maxi = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] > arr[maxi]) {
                maxi = j; 
            }
        }
        swap(&arr[i], &arr[maxi]);
    }
}

int kth(int arr[], int size, int k) {
    if (k < 1 || k > size) {
        return -1;
    }
    selecSort(arr, size);

    return arr[k - 1];
}

int main() {
    int arr[] = {-10,20,40,25,1,0};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 4;

    int kthLarge = kth(arr, size, k);
    if (kthLarge != -1) {
        printf("The %dth largest element is %d\n", k, kthLarge);
    } else {
        printf("Invalid k\n");
    }

    return 0;
}
