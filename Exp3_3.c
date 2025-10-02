//To check if 3 points are collinear or not
#include <stdio.h>
int main(){
    float x1, x2, x3, y1, y2, y3;
    printf("Enter the coordinates of first point (x1 y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Enter the coordinates of second point (x2 y2): ");
    scanf("%f %f", &x2, &y2);
    printf("Enter the coordinates of third point (x3 y3): ");
    scanf("%f %f", &x3, &y3);
    // check collinearity
    if ((y2 - y1) * (x3 - x2) == (y3 - y2) * (x2 - x1)) {
        printf("The points are collinear.\n");
    } else {
        printf("The points are not collinear.\n");
    }
    return 0;
}