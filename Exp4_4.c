#include <stdio.h>

void countCalls() {
    static int count = 0; // Static local variable
    count++;
    printf("Function called %d times\n", count);
}

int main() {
    countCalls();
    countCalls();
    countCalls();
    return 0;
}
