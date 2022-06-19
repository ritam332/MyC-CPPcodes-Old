#include <stdio.h>
int main()
{
    char ch;
    printf("Enter an alphabet :\n");
    scanf("%c", &ch);
    switch (ch)
    {
    case 'a':
    case 'A':
        printf("It is a vowel\n");
        break;
    case 'e':
    case 'E':
        printf("It is a vowel\n");
        break;
    case 'i':
    case 'I':
        printf("It is a vowel\n");
        break;
    case 'o':
    case 'O':
        printf("It is a vowel\n");
        break;
    case 'u':
    case 'U':
        printf("It is a vowel\n");
        break;

    default: printf("It is a consonent\n");
        break;
    }
    return 0;
}