#include <stdio.h>

#include <ctype.h>

int main()
{
    FILE *file_in, *file_out;
    int character;

    // Open the input file for reading
    file_in = fopen("input.txt", "r");

    if (file_in == NULL)
    {
        printf("Error opening input.txt\n");
        return 1;
    }

    // Open the output file for writing
    file_out = fopen("output.txt", "w");
    if (file_out == NULL)
    {

        printf("Error opening output.txt\n");
        fclose(file_in);
        return 1;
    }

    // sdvb
    while ((character = fgetc(file_in)) != EOF)
    {
        if (islower(character))
            character = toupper(character);
        fputc(character, file_out);
    }

    // Close the files

    fclose(file_in);
    fclose(file_out);

    return 0;
}