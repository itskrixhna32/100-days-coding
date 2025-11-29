#include <stdio.h>

int main()
{
    char file_name[128];
    FILE *file_ptr;
    int char_read;

    printf("Please provide the filename: ");

    scanf("%127s", file_name);

    file_ptr = fopen(file_name, "r");

    if (file_ptr == NULL)
    {
        printf("Oops! Can't find the file.\n");
    }
    else
    {
        // Successfully opened file
        printf("Hooray! File is open.\n");

        while ((char_read = fgetc(file_ptr)) != EOF)
        {
            putchar(char_read);
        }
        fclose(file_ptr);
    }

    return 0;
}