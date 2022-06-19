#include <stdio.h>
int main()
{
    int n;
    printf("Enter marks\n");
    scanf("%d", &n);
    if (n<0 || n>100)
    printf("wrong choice , try again\n");
    else if (n >= 90)
        printf("the grade is O\n");
    else if (n >= 80)
        printf("the grade is E\n");
    else if (n >= 70)
        printf("the grade is A\n");
    else if (n >= 60)
        printf("the grade is B\n");
    else if (n >= 50)
        printf("the grade is C\n");
    else if (n >= 40)
        printf("the grade is D\n");
    else if (n < 40)
            printf("the grade is F\n");
    
return 0;
}