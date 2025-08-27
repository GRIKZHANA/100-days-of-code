#include <stdio.h>
int main() {
    float celsius, fahrenheit;
    printf("Enter temperature in Celcius: ");
    scanf("%f", &celsius);
    fahrenheit = (Celsius * 9/5) + 32;
    printf("Celsius: %.2f, Fahrenheit: %.2f\n", celsius, fahrenheit);
    return 0;
}
