#include <stdio.h>

int main() {
    int days, fine = 0;

    printf("Enter number of days late: ");
    scanf("%d", &days);

    if(days > 30)
        printf("Membership Cancelled.\n");
    else if(days > 10)
        fine = 5*2 + 5*4 + (days-10)*6;
    else if(days > 5)
        fine = 5*2 + (days-5)*4;
    else if(days > 0)
        fine = days*2;

    if(fine > 0)
        printf("Fine = %d\n", fine);

    return 0;
}
