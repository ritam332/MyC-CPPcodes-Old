#include <stdio.h>
int main()
{
    float basic, hra, da, tot;
    printf("Enter basic salary of an employee: ");
    scanf("%f", &basic);
    if (basic <= 8000)
    {
        da = basic * 0.08;
        hra = basic * 0.2;
    }
    else if (basic <= 20000)
    {
        da = basic * 0.09;
        hra = basic * 0.25;
    }
    else
    {
        da = basic * 0.095;
        hra = basic * 0.3;
    }
    tot = basic + hra + da;
    printf("GROSS SALARY OF EMPLOYEE = %.2f", tot);
    return 0;
}