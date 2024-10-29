#include <stdio.h>

void copying(char *real, char *copy) {
    while (*real != '\0') { 
        *copy = *real; 
        real++;               
        copy++;          
    }
    *copy = '\0'; 
}

int main() {
    char real[100]; 
    char copy[100]; 

    
    printf("Enter a string: ");
    fgets(real, sizeof(real), stdin);

    for (int i = 0; real[i] != '\0'; i++) {
        if (real[i] == '\n') {
            real[i] = '\0';
            break;
        }
    }

    
    copying(real, copy);

    
    printf("Copied string is: %s\n", copy);

    return 0;
}
