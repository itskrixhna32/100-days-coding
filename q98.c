#include <stdio.h>
#include <string.h>

void initials(char str[])
{
    int i;
    int length = strlen(str);

    if (str[0] != ' ')
        printf("%c.", str[0]);

    for (i = 0; i < length; i++)
    {
        if (str[i] == ' ' && str[i + 1] != '\0' && str[i + 1] != ' ')
            printf("%c.", str[i + 1]);
    }
}

int main()
{
    char name[50];
    printf("Enter your name : ");
    gets(name);

    char surname[15];
    int i, j, k = 0, index;

    int length = strlen(name);

    while (length > 0 && name[length - 1] == ' ')
    {
        name[length - 1] = '\0';
        length--;
    }

    for (i = length - 1; i >= 0; i--)
    {
        if (name[i] != '\0' && name[i] == ' ' && name[length] != ' ')
        {
            for (j = i + 1; j < length; j++)
            {
                index = i;
                surname[k] = name[j];
                k++;
            }
            break;
        }
    }
    surname[k] = '\0'; // ending of the surname array

    // now store the first name of the user in an another string
    char firstname[40];
    for (i = 0; i < index; i++)
        firstname[i] = name[i];
    firstname[index] = '\0';

    initials(firstname);
    printf(" %s", surname);

    return 0;
}