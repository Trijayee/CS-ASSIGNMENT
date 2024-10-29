#include <stdio.h>
#include <string.h>

int find_substring_index(const char *string, const char *substring) {
    char *ptr = strstr(string, substring);
    if (ptr) {
        return ptr - string; 
    }
    return -1; 
}

int main() {
    const char *string = "Subhrajit Maitra";
    const char *substring = "Maitra";
    
    int result = find_substring_index(string, substring);
    
    if (result != -1) {
        printf("Substring found at index: %d\n", result);
    } else {
        printf("Substring not found.\n");
    }

    return 0;
}
