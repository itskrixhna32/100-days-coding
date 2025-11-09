#include <stdio.h>
#include <ctype.h> // includes tolower() funtion

int main()
{
    char str[1000];
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    gets(str);

    int i = 0;
    while (str[i] != '\0')
    {
        char ch = tolower(str[i]);

        if ((ch >= 'a' && ch <= 'z'))
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
        i++;
    }

    printf("Number of vowels and consonants are \n");
    printf("Vowels=%d , Consonants=%d\n", vowels, consonants);

    return 0;
}