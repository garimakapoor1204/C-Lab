#include <stdio.h>

int globalVar = 10;  // Global variable

void function1() {
    printf("Function 1: globalVar = %d\n", globalVar);
}

void function2() {
    printf("Function 2: globalVar = %d\n", globalVar);
}

int main() {
    printf("Main: globalVar = %d\n", globalVar);
    function1();
    function2();
    return 0;
}
