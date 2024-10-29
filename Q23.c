#include <stdio.h>

int countv(const char *str) {
    int count = 0;
    char ch;

    while ((ch = *str++) != '\0') {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count++;
        }
    }
    
    return count;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int vowel = countv(str);

    printf("Number of vowels in the string: %d\n", vowel);

    return 0;
}
