#include <stdio.h>
#include <string.h>
int main()
{
    int n, frequency = 0, i;
    char ch, str[1000];

    printf("Enter the string : ");
    gets(str);

    n = strlen(str);

    printf("Enter the character for whom you want to count the frequecy : ");
    scanf("%c", &ch);

    for (i = 0; i < n; i++)
    {
        if (str[i] == ch)
            frequency++;
    }

    printf("Frequency of %c in the entered text is %d.", ch, frequency);

    return 0;
}