#include <stdio.h>

int main() {
    unsigned char num = 223;        
    unsigned char mask = (1 << 5);  

    unsigned char result = num | mask;

    printf("Original number: %d\n", num);
    printf("After turning ON bit 5: %d\n", result);

    return 0;
}
