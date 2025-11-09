#include <stdio.h>

int main()
{
    char str[1000];
    printf("Enter the string :");
    gets(str);

    int count = 0;
    printf("Required output is: \n");
    while (str[count] != '\0')
    {
        {
            if (str[count != '\n'])
                printf("%c\n", str[count]);
            count++;
        }
    }
    return 0;
}