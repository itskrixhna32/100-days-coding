#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000], reverse[1000];
    printf("Enter the string : ");
    gets(str);

    int n = strlen(str);
    int index = 0;
    printf("Reverse of the string is: ");
    while (str[index] != '\0')
    {
        if (str[index] != '\n')
        {
            reverse[index] = str[n - 1 - index];
        }

        printf("%c", reverse[index]);
        index++;
    }
    printf("\n");
    
    return 0;
}