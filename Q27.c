#include <stdio.h>

int lengthCount(const char *str) {
    int length = 0;

    while (*str != '\0') {
        length++;   
        str++;         
    }

    return length;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int len = lengthCount(str);

    
    printf("Length of the string is : %d\n", len);

    return 0;
}
