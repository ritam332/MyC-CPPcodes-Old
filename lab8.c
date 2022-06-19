#include <stdio.h>
int main()
{
    int n , c ;
    printf("Enter the amount :\n");
    scanf("%d" , &n);
    c=n/100;
    n=n-(c*100) ;
    printf("No. of Rs.100 note -> %d\n",c);
    c=n/50;
    n=n-(c*50) ;
    printf("No. of Rs.50 note -> %d\n",c);
    c=n/10;
    n=n-(c*10) ;
    printf("No. of Rs.10 note -> %d\n",c);
    c=n/5;
    n=n-(c*5) ;
    printf("No. of Rs.5 coin -> %d\n",c);
    c=n/2;
    n=n-(c*2) ;
    printf("No. of Rs.2 coin -> %d\n",c);
    c=n/1;
    n=n-(c*1) ;
    printf("No. of Rs.1 coin -> %d\n",c);
    return 0;
}


