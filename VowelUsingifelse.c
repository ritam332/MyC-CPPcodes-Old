#include <stdio.h>
int main()
{
    char ch ; 
    printf("Enter an alphabet :\n");
    scanf("%c",&ch);
    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("It is a vowel.\n");
    }
    else
    printf("It is a consonent");
    return 0;
    
}