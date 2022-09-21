#include <stdio.h>

swap (int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int a, b;
    printf("\nEnter value of a & b: ");
    scanf("%d %d", &a, &b);
    printf("\nBefore Swapping:\n");
    printf("\na = %d\n\nb = %d\n", a, b);
    swap(&a, &b);
    printf("\nAfter Swapping:\n");
    printf("\na = %d\n\nb = %d", a, b);
    return 0;
}
