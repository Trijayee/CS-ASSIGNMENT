#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int counting(const char *str) {
    int count = 0;
    bool word = false;

    while (*str) {
        if (*str != ' ') {
            if (!word) {
                word = true;
                count++;
            }
        } else {
            word = false; 
        }
        str++;
    }
    
    return count;
}

int main() {
    const char *string = "Hii I am Subhrajit";
    int count = counting(string);
    
    printf("Number of words: %d\n", count);

    return 0;
}
