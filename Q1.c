#include <stdio.h>
#include <limits.h>

void SecLargestSecSmallest(int arr[], int size, int *secondLargest, int *secondSmallest) {
    if (size < 2) {
        printf("Array has only 1 element.\n");
        return;
    }

    int largest = INT_MIN;
    int secLargestTemp = INT_MIN;
    int smallest = INT_MAX;
    int secSmallestTemp = INT_MAX;

    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            secLargestTemp = largest;
            largest = arr[i];
        } else if (arr[i] > secLargestTemp && arr[i] < largest) {
            secLargestTemp = arr[i];
        }

        if (arr[i] < smallest) {
            secSmallestTemp = smallest;
            smallest = arr[i];
        } else if (arr[i] < secSmallestTemp && arr[i] > smallest) {
            secSmallestTemp = arr[i];
        }
    }

    *secondLargest = secLargestTemp;
    *secondSmallest = secSmallestTemp;
}

int main() {
    int arr[] = {-10, 35, 1, 0, 34, 60};
    int size = sizeof(arr) / sizeof(arr[0]);
    int secondLargest, secondSmallest;

    SecLargestSecSmallest(arr, size, &secondLargest, &secondSmallest);

    printf("Second Largest element is : %d\n", secondLargest);
    printf("Second Smallest element is : %d\n", secondSmallest);

    return 0;
}
