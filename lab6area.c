#include <stdio.h>
int main()
{
    float radius, area;
    printf("Enter The Radius of Circle :\n");
    scanf("%f", &radius);
    area = radius * radius * 22 / 7;
    printf("The area of the circle is %.2f", area);
    return 0;
}