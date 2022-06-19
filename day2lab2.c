#include <stdio.h>
int main()
{
    float a, b, c;
    printf("Enter three numbers\n");
    scanf("%f%f%f", &a, &b, &c);
    if (a == b && b == c)
    {
        printf("all are equal\n");
    }

    else if (a > b)
    {
        if (a > c)
        {
            printf("the biggest number is %.2f", a);
        }
        else
            printf("the biggest number is %.2f", c);
    }
    else
    {
        if (b > c)
        {
            printf("the biggest number is %.2f", b);
        }
        else
            printf("the biggest number is %.2f", c);
    }
    return 0;
}