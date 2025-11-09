#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    printf("Enter the string : \n");
    gets(str);

    int n = strlen(str);

    int index = 0;

    while (str[index] != '\0' && str[index] != '\n')
    {
        if (str[index] == str[n - 1 - index])
        {
        }
        else
        {
            printf("\nNot a PALINDROME STRING ");
            return 0;
        }
        index++;
    }

    printf("PALINDROME STRING ");
    return 0;
}