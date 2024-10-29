#include <stdio.h>

int main() {
    int array[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

    printf("\nAverage of each row:\n");
    for (int i = 0; i < 4; i++) {
        int sum = 0; 
        for (int j = 0; j < 4; j++) {
            sum += array[i][j];
        }
        float average = (float)sum / 4;
        printf("Average of row %d: %.2f\n", i + 1, average);
    }

    printf("\nAverage of each column:\n");
    for (int j = 0; j < 4; j++) {
        int sum = 0;
        for (int i = 0; i < 4; i++) {
            sum += array[i][j];
        }
        float average = (float)sum / 4; 
        printf("Average of column %d: %.2f\n", j + 1, average);
    }

    return 0;
}
