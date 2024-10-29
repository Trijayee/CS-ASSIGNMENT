#include <stdio.h>

int main() {
    int array[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

    printf("\nSum of each row:\n");
    for (int i = 0; i < 4; i++) {
        int sum = 0;
        for (int j = 0; j < 4; j++) {
            sum += array[i][j];
        }
        printf("Sum of row %d: %d\n", i + 1, sum);
    }

    return 0;
}
