//To calculate area and perimeter of rectangle
#include <stdio.h>
int main(){
    int l, b;
    printf("Enter length of rectangle: ");
    scanf("%d", &l);
    printf("Enter breadth of rectangle: ");
    scanf("%d", &b);
    printf("Area of rectangle: %d\n", l * b);
    printf("Perimeter of rectangle: %d\n", 2 * (l + b));
    return 0;
}