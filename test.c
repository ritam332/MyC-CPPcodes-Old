#include <stdio.h>
int main()
{
    int a,b,c,n,i;
    printf("Enter the no. of terms you want to print of fibonacci series\n");
    scanf("%d" ,&n);
    a=0;
    b=1;
    c=0;
    printf("the fibonacci series is...\t");
    for (i = 1; i <= n; i++)
    {
        printf("%d, ",c);
        a=b;
        b=c;
        c=a+b;
    }
    return 0;
}