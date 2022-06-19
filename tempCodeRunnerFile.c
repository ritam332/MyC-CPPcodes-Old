#include <stdio.h>
int main()
{
int x, n, i, j;
printf("Enter the value of x: ");
scanf("%d", &x);
printf("Enter the number of terms: ");
scanf("%d", &n);
float S = 0;
for (i = 1; i <= n; i++)
{
float t = 1;
for (j = 1; j <= (2 * i) - 1; j++)
t = t * x * 1.0 / j;
if (i % 2 == 0)
S = S - t;
else
S = S + t;
}
printf("The sum of the series is: %f", S);
return 0;
}