#include <stdio.h>

int main()
{
    FILE *file;
    char filename[100];
    char newLine[256];

    printf("Enter the filename to append text: ");
    scanf("%s", filename);

    file = fopen(filename, "a");
    if (file == NULL)
    {
        printf("Error: Unable to open file %s\n", filename);
        return 1;
    }

    getchar();

    printf("Enter the text to append: ");
    fgets(newLine, sizeof(newLine), stdin);

    // Append the entered text to the file
    fputs(newLine, file);

    fclose(file);

    printf("File updated successfully with appended text.\n");

    return 0;
}