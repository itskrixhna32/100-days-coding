#include <stdio.h>

int main()
{
    char str[1000];
    printf("Enter string you want to enter: ");
    gets(str);

    int count = 0;
    printf("After conversion to upper case: \n");
    while (str[count] != '\0')
    {
        if (str[count] >= 'a' && str[count] <= 'z')
        {
            str[count] = str[count] - 32;
        }
        printf("%c", str[count]);
        count++;
    }
    printf("\n");

    return 0;
}