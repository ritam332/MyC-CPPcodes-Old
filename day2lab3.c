#include <stdio.h>
#include<math.h>
int main()
{
    int a, b, c,s;
    float area;
    printf("enter three integer values\n");
    scanf("%d%d%d", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a)
    {
        if (a != b && b != c)
        {
            printf("It will form a scalene triangle\n");
        }
        else if (a == b && b == c)
        {
            printf("It will form a equilateral triangle\n");
        }
        else if (a == b && a != c || a == c && a != b || b == c && b != a)
        {

            printf("It will form a isosceles triangle\n");
        }
        if (a * a + b * b == c * c || b * b + c * c == a * a || a * a + c * c == b * b)
        {
            printf("It will form a right angled triangle\n");
        }
        s=(a+b+c)/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("the area of the triangle is %.2f",area);
    }
    else
        printf("your given integers will not form any triangle\n");
        
    return 0;
}