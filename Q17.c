#include <stdio.h>

int main() {
    int matrix[4][4] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    int size;
    int isIdentity = 1;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == j) {
                if (matrix[i][j] != 1) {
                    isIdentity = 0;
                    break;
                }
            } else {
                if (matrix[i][j] != 0) {
                    isIdentity = 0;
                    break;
                }
            }
        }
        if (!isIdentity) {
            break;
        }
    }

    if (isIdentity) {
        printf("It is an identity matrix.\n");
    } else {
        printf("It is not an identity matrix.\n");
    }

    return 0;
}
