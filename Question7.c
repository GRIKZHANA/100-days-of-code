#include <stdio.h>
int main() {
    int a, b;
    printf("For Input 1:\n");
    printf("Enter two numbers: ");
    scanf("%d %d" &a, &b);
    a=a+10;
    b=b-10;
    printf("After swap: &d &d\n", a, b);
    int x, y;
    printf("For Input 2:\n");
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    x=x+7;
    y=y-7;
    printf("After swap: %d %d", x, y);

    return 0;
}
