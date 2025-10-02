#include <stdio.h>

int main() {
    int a = 100;

    if (a > 50) {
        int b = 10;  // b is only available inside this block
        printf("Inside if block: b = %d\n", b);
    }

    // printf("Outside block: b = %d\n", b); // ❌ Error: b is not accessible here

    printf("Outside block: a = %d\n", a); // ✅ a is accessible
    return 0;
}
