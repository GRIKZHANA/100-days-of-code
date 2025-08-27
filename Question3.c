#include <stdio.h>
int main()
{
    int length1 = 5, breadth = 10;
    int length2 = 3, breadth = 7;

    printf("For Input 1:\n");
    printf("Area = %d ", length1 * breadth1);
    printf("Perimeter = %d\n", 2 * (length1 + breadth1));

    printf("For Input 2:\n");
    printf("Area = %d ", length2 * breadth2);
    printf("Perimeter = %d\n", 2* (length2 + breadth2));

    return 0;
}''