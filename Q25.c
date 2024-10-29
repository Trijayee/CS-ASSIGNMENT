#include <stdio.h>

void reverse(char *str) {
    char *start = str;        
    char *end = str;           
    while (*end != '\0') {
        end++;
    }
    end--; 

    while (start < end) {
        char temp = *start; 
        *start = *end;        
        *end = temp;          
        start++;              
        end--;   
    }             
}

int main() {
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0'; 
            break;
        }
    }

    reverse(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
