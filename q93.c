#include <stdio.h>
#include <string.h>

void sortString(char str[]) 
{
    int n = strlen(str);
    char temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (str[i] > str[j]) 
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main()
{
    char str1[500], str2[500];

    printf("Enter the first string: ");
    gets(str1);

    printf("\nEnter the second string: ");
    gets(str2);

    if (strlen(str1) != strlen(str2))
    {
        printf("\nNot anagrams\n");
        return 0;
    }

    sortString(str1);
    sortString(str2);

    if (!strcmp(str1, str2))
        printf("\nAnagrams\n");
    else
        printf("\nNot anagrams\n");

    return 0;
}