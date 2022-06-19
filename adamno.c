#include <stdio.h>
int reverse(int num)
{
    int rev1 = 0, mod;
    while (num > 0)
    {
        mod = num % 10;
        rev1 = (rev1 * 10) + mod;
        num = num / 10;
    }
    return rev1;
}
int main()
{
    int n, i, num, rev1, sq1, sq2;
    printf("The required no.s are:\n");
    for (i = 10; i < 100; i++)
    {
        num = i;
        rev1 = reverse(num);
        sq1 = num * num;
        sq2 = rev1 * rev1;
        if (sq1 == reverse(sq2))
        {
            printf("%d , ", num);
        }
    }
    return 0;
}