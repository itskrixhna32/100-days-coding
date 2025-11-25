#include <stdio.h>
#include <string.h>

int isrotation(char str1[], char str2[])
{
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2)
        return 0;

    for (int i = 0; i < len1; i++)
    {
        int match = 1;
        for (int j = 0; j < len1; j++)
        {
            if (str1[(i + j) % len1] != str2[j])
            {
                match = 0;
                break;
            }
        }

        if (match == 1)
            return 1;
    }

    return 0; // No rotation matched
}

int main()
{
    char str1[1000], str2[1000];

    printf("Enter the first string : \n");
    gets(str1);

    printf("Enter the second string : \n");
    gets(str2);

    if (isrotation(str1, str2))
        printf("YES its the rotation");
    else
        printf("NOT the rotation");

    return 0;
}