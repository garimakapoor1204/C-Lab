//Converting temperature from celsius to fahrenheit
#include <stdio.h>
int main(){
    int celcius;
    printf("Enter temperature in Celcius: ");
    scanf("%d", &celcius);
    int fahrenheit = (celcius * 9/5) + 32;
    printf("Temperature in Fahrenheit: %d\n", fahrenheit);
    return 0;
}