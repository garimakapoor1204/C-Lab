// Program that prompts the user to enter their name and age
#include <stdio.h>
int main(){
    char name[100];
    int age;
    printf("Enter your name: ");
    scanf("%99s", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Hello, %s! You are %d years old.\n", name, age);
    return 0;
}