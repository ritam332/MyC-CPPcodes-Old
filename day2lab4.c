#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, disc, root1, root2, realPart, imagPart;
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    disc = b * b - 4 * a * c;

    if (disc > 0)
    {
        root1 = (-b + sqrt(disc)) / (2 * a);
        root2 = (-b - sqrt(disc)) / (2 * a);
        printf("root1 = %.2f and root2 = %.2f", root1, root2);
    }

    else if (disc == 0)
    {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %.2f;", root1);
    }

    else
    {
        realPart = -b / (2 * a);
        imagPart = sqrt(-disc) / (2 * a);
        printf("root1 = %.2f+%.2fi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
    }

    return 0;
}