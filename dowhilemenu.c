#include <stdio.h>
#include <math.h>
int main()
{
    int a, ch, i, f = 1, flag = 0, rem, sum = 0, true;
    char c;
    do
    {

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
                    printf("The no. is not prime\n");
                    flag = 1;
                    break;
                }
                
            }
            if (flag == 0)
                    printf("Number is prime\n");
                
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
            printf("wrong choice , try again\n");
            break;
        }
        printf("Do you want to continue? (y/n)\n");
        fflush(stdin);
        scanf("%c", &c);
    } while (c == 'y' || c == 'Y');
    return 0;
}