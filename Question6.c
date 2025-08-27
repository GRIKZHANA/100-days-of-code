#include <stdio.h>
int main()
{
    int a,b,c;
    printf("For Input 1:\n");
    printf("Enter two numbers: ");
    scanf("%d", &a, &b, &c);
    c=2;
    a=a+c;
    b=b-c;
    printf("After swap: %d %d", a, b);
    int x,y,z;
    printf("\nFor Input 2:\n");
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    z=2;
    x=x+z;
    y=-z+y;
    printf("After swap: %d %d", x, y);
    return 0;
}
