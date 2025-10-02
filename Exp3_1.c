//Check if the triangle is valid or not
#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter the three sides of triangle: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c && b+c>a && c+a>b){
        if(a==b && b==c){
            printf("Equilateral triangle\n");
        } else if(a==b || b==c || c==a){
            printf("Isosceles triangle\n");
        } else if ( a!=b && b!=c && c!=a ) { 
            printf("Scalene triangle\n");
        }
        // check right angle triangle
        if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b){
            printf("Right angle triangle\n");
        } else {
            printf("Not a right angle triangle\n");
        }
    } else {
        printf("Invalid triangle\n");
    }
    return 0;
}