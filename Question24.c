#include <stdio.h>

int main() {
    int units, bill = 0;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    if(units > 300)
        bill = 100*5 + 100*7 + 100*10 + (units-300)*12;
    else if(units > 200)
        bill = 100*5 + 100*7 + (units-200)*10;
    else if(units > 100)
        bill = 100*5 + (units-100)*7;
    else
        bill = units*5;

    printf("Electricity Bill = %d\n", bill);

    return 0;
}
