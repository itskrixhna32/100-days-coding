#include <stdio.h>
int main()
{
    FILE *file;

    char line[256]; // Buffer to hold each line read from the file

    // Open the file info.txt in read mode ("r")
    file = fopen("info.txt", "r");
    if (file == NULL)
    {

        printf("Error: Could not open file info.txt\n");
        return 1; // Exit if file cannot be opened
    }

    // Read lines from the file until EOF is
    while (fgets(line, sizeof(line), file) != NULL)
    {
        // Print each line to the console

        printf("%s", line);
    }

    // Close the file after reading all lines
    fclose(file);

    return 0;
}