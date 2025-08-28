#include<stdio.h>
int main()
{
    int principal1 = 1000, rate1 = 5, time1 = 2;
    int principal2 = 5000, rate2 = 7, time2 = 3;
    float simple_interest1, compound_interest1;
    float simple_interest2, compound_interest2;

    simple_interest1 = (principal1 * rate1 * time1) / 100.0;
    compound_interest1 = principal1 * (pow((1 + rate1 / 100.0), time1) - 1);

    simple_interest2 = (principal2 * rate2 * time2) / 100.0;
    compound_interest2 = principal2 * (pow((1 + rate2 / 100.0), time2) - 1);

    printf("For principal=%d, rate=%d, time=%d:\n", principal1, rate1, time1);
    printf("Simple Interest=%.2f, Compound Interest=%.2f\n", simple_interest1, compound_interest1);

    printf("For principal=%d, rate=%d, time=%d:\n", principal2, rate2, time2);
    printf("Simple Interest=%.2f, Compound Interest=%.2f\n", simple_interest2, compound_interest2);

    return 0;
}
}