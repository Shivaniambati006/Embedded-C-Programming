#include <stdio.h>

int toggleFifthBit(int n) {
    // Write your code here
    n ^= (1 << 5);
    return n; 
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", toggleFifthBit(n));
    return 0;
}