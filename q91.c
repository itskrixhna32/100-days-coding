#include <stdio.h>
#include <string.h>
int main()
{
    int n,i, j = 0;
    char str[1000];
    char result[1000];

    printf("Enter the string : ");
    gets(str);

    n = strlen(str);

    for (i = 0; str[i] != '\n'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U');

        else
        {
            result[j] = str[i];
            j++;
        }
    }
    printf("Output Without Vowel is: ");
    printf("%s\n", result);

    return 0;
}