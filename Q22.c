#include <stdio.h>

int hcf(int a, int b) {
    if (b == 0) {
        return a;
    }
    return hcf(b, a % b);
}

int lcm(int a, int b) {
    return (a * b) / hcf(a, b); 
}

int main() {
    int n1, n2;

    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    if (n1 <= 0 || n2 <= 0) {
        printf("No negative numbers.\n");
        return 1;
    }

    int hcfans = hcf(n1, n2);
    int lcmans = lcm(n1, n2);

    printf("HCF of %d and %d is: %d\n", n1, n2, hcfans);
    printf("LCM of %d and %d is: %d\n", n1, n2, lcmans);

    return 0;
}
