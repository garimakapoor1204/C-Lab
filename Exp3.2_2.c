//To print the multiplication table of the number entered by the user
#include <stdio.h>
int main(){
    int n, mul;
    printf("Enter a number: ");
    scanf("%d", &n);
    mul=1;
    for(int i=1; i<=10; i++){
        mul = n*i;
        printf("%d*%d=%d\n", n, i, mul);
    }
    return 0;
}