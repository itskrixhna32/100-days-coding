#include <ctype.h>

int main()
{

    char input[1024];

    int idx = 0;
    char ch;

    // Read entire line
    while ((ch = getchar()) != '\n' && ch != EOF && idx < 1023)
    {

        input[idx++] = ch;
    }
    input[idx] = '\0';

    // Convert to sentence case - capitalize first letter of each word
    int capitalize_next = 1; // Flag to capitalize next letter

    for (int i = 0; input[i] != '\0'; i++)
    {

        if (isspace(input[i]))
        {
            capitalize_next = 1;
        }
        else if (capitalize_next && isalpha(input[i]))
        {
            input[i] = toupper(input[i]);
            capitalize_next = 0;
        }
        else
        {
            input[i] = tolower(input[i]);
        }
    }

    printf("%s\n", input);
    return 0;
}