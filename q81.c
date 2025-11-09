#include <stdio.h>

int main()
{
    char str[1000];
    printf("Enter the string : ");
    gets(str);

    int count = 0;
    while (str[count] != '\0')
    {
        count++;
    }

    if (count > 0 && str[count - 1] == '\n')
    {
        count--;
    }

    printf("Characters in the String are: %d\n", count);

    return 0;
}