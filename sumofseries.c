#include <stdio.h>
#include <math.h>
int main()
{
    int c, ch;
    int n, sum = 0, i;
    float s;
    int x, fact = 1;
    double sum1;
    do
    {
        printf("Enter a number: ");
        scanf("%d", &n);
        printf("\n(1)S=1 + 2 + 3 + 4 + . . . . . + N \n");
        printf("(2)S=1 + 3 + 5 + 7 + . . . . . + N\n");
printf("(3)S= 1 - 1/3 + 1/9 - 1/27 + 1/81 - 1/243 . . .Up to Nth Term.\n ");
printf("Enter your Choice:\n");
scanf("%d", &c);
      switch (c)
      {
        case 1:
            for (i = 1; i <= n; i++)
                sum = sum + i;
            printf("S=%d", sum);
            break;
        case 2:
            for (i = 1; i <= n; i++)
                sum = sum + 2 * i - 1;
            printf("S=%d", sum);
            break;
        case 3:
            //S= 1 - 1/3 + 1/9 - 1/27 + 1/81 - 1/243 …. Up to Nth Term.
            for (i = 0; i <= n; i++)
            {
                if (i % 2 == 1)
                {
                    sum1 = sum1 - 1 / pow(3, i);
                }
                else
                {
                    sum1 = sum1 + 1 / pow(3, i);
                }
            }
            printf("S=%.4lf", sum1);
            break;
        default:
            printf("Wrong choice entered");
       }
printf("\nPress 1 to Continue ,0 to Exit:");
scanf("%d", &ch);
    } while (ch == 1);
    return 0;
}