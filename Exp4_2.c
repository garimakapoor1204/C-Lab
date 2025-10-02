#include <stdio.h>

int globalVar = 20; // Global variable

void testFunction() {
    int localVar = 5; // Local variable
    printf("Inside function: localVar = %d\n", localVar);
    printf("Inside function: globalVar = %d\n", globalVar);
}

int main() {
    testFunction();

    // printf("Outside function: localVar = %d\n", localVar); // ❌ Error: localVar is not accessible here

    printf("Outside function: globalVar = %d\n", globalVar);
    return 0;
}
