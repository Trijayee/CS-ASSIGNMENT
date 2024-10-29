#include <stdio.h>
#include <limits.h>

int main() {
    int matrix[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    
    int smallest = INT_MAX;
    int largest = INT_MIN;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matrix[i][j] < smallest) {
                smallest = matrix[i][j];
            }
            if (matrix[i][j] > largest) {
                largest = matrix[i][j];
            }
        }
    }

    printf("Smallest element in the matrix: %d\n", smallest);
    printf("Largest element in the matrix: %d\n", largest);

    return 0;
}
