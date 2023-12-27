#include <stdio.h>

int computeVolume() {
    int radius;
    printf("Enter a radius: ");
    scanf("%d", &radius);
    int r3 = (radius * radius * radius);
    double volume = (4.0f / 3.0f) * 3.14f * r3;
    printf("Volume: %lf", volume);
    return 0;
}

int taxation() {
    float x;
    printf("Enter a dollar and cent amount: ");
    scanf("%f", &x);
    float res = x * 1.05f;
    printf("\nYour amount + 5 percent = %f", res);
    return 0;
}

int polynomials() {
    float x;
    printf("\nPolynomial: 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6");
    printf("\nEnter a value for x: ");
    scanf("%f", &x);
    // Horner's rule
    float res = (((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6);
    printf("\nResult: %f", res);
    return 0;
}

int main(void){
    polynomials();
    return 0;
}