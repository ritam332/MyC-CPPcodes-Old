#include <stdio.h>
// Swapping of two variables
int main()
{
    int a, b;
    printf("enter two no.s a and b\n");
    scanf("%d%d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("the values of a and b are %d and %d", a, b);
    return 0;
}