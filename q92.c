#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    int freq[26] = {0}; 
    int i, found = 0;

    printf("Enter the string: ");
    gets(str); 
    for (i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z')
        {
            freq[ch - 'a']++; // increment count
            if (freq[ch - 'a'] == 2)
            {
                printf("First repeating lowercase alphabet : %c\n", ch);
                found = 1;
                break;
            }
        }
    }

    if (!found)
        printf("No repeating lowercase alphabet found.\n");

    return 0;
}