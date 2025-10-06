#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits = 0, temp;
    long long swapped;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    last = temp % 10;   // last digit

    // find number of digits and first digit
    while (temp >= 10) {
        temp /= 10;
        digits++;
    }
    first = temp;       // first digit

    // calculate swapped number
    swapped = last;  // place last digit at first position
    swapped *= pow(10, digits);        // shift left by number of digits
    swapped += (num % (int)pow(10, digits)) - last;  // add middle part
    swapped += first;  // place first digit at last position

    printf("Number after swapping first and last digits = %lld\n", swapped);

    return 0;
}
