// To compute the BMI Index of the person
#include <stdio.h>

int main() {
    float weight, height;
    float bmi;

    printf("Enter weight (kg): ");
    scanf("%f", &weight);
    printf("Enter height (m): ");
    scanf("%f", &height);

    if (height <= 0) {
        printf("Invalid height. Must be greater than 0.\n");
        return 1;
    }

    bmi = weight / (height * height);
    if (bmi < 15.0)
        printf("Starvation\n");
    else if (bmi >= 15.0 && bmi <= 17.5)
        printf("Anorexic\n");
    else if (bmi > 17.5 && bmi <= 18.5)
        printf("Underweight\n");
    else if (bmi > 18.5 && bmi <= 24.9)
        printf("Ideal\n");
    else if (bmi >= 25.0 && bmi <= 29.9)
        printf("Overweight\n");
    else if (bmi >= 30.0 && bmi <= 39.9)
        printf("Obese\n");
    else
        printf("Morbidly Obese\n");

    return 0;
}
