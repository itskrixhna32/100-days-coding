#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *file;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;
    char ch;

    // Open the file in read mode
    file = fopen("sample.txt", "r");
    if (file == NULL)
    {
        printf("Error: Unable to open file sample.txt\n");
        return 1; // Exit if file not found or cannot be opened
    }
    while ((ch = fgetc(file)) != EOF)
    {
        characters++; // Count every character read

        if (ch == '\n')
        {
            lines++;
        }

        if (isspace(ch))
        {
            if (inWord)
            {
                words++; // End of a word detected
                inWord = 0;
            }
        }
        else
        {
            inWord = 1; // Inside a word
        }
    }

    if (inWord)
    {
        words++;
    }

    if (characters > 0 && lines == 0)
    {
        lines = 1;
    }

    // Close the file
    fclose(file);

    // Print the results
    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}