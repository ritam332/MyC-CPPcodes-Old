#include <stdio.h>
#include <math.h>
int main()
{
    int a, ch, i, f = 1, flag = 0, rem, sum = 0, true;
    printf("Enter an integer type number:\n");
    scanf("%d", &a);
    printf("Enter your preferance among 1 to 3:\n1.Factorial\n2.prime or not\n3.pallindrome or not\n");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:

        for (i = 1; i <= a; i++)

        {
            f = f * i;
        }

        printf("factorial=%d", f);
        break;
    case 2:
        for (i = 2; i <= sqrt(a); i++)
        {
            if (a % i == 0)
            {
                printf("The no. is not prime");
                flag = 1;
                break;
            }
            if (flag == 0)
                printf("Number is prime");
        }
        break;
    case 3:
        true = a;
        while (a > 0)
        {
            rem = a % 10;
            sum = (sum * 10) + rem;
            a = a / 10;
        }
        if (true == sum)
        {
            printf("It is pallindrome no.\n");
        }
        else
            printf("It is not pallindrome no.\n");
        break;

    default:
        printf("wrong choice , try again");
        break;
    }
}