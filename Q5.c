#include <stdio.h>

int repeated(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                return arr[i];
            }
        }
    }
    return -1;
}

int main() {
    int arr[] = {2, 5, 2, 3, 2, 8, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    int repeatElement = repeated(arr, size);

    if (repeatElement != -1) {
        printf("The first repeated element is : %d\n", repeatElement);
    } else {
        printf("No repeated elements.\n");
    }

    return 0;
}

