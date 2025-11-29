#include <stdio.h>

int main()
{
    FILE *srcFile, *destFile;
    char srcFilename[100], destFilename[100];
    int ch;

    printf("Enter the source filename: ");
    scanf("%s", srcFilename);

    printf("Enter the destination filename: ");
    scanf("%s", destFilename);

    srcFile = fopen(srcFilename, "r");
    if (srcFile == NULL)
    {
        printf("Error: Cannot open source file %s\n", srcFilename);
        return 1;
    }

    destFile = fopen(destFilename, "w");
    if (destFile == NULL)
    {
        printf("Error: Cannot open destination file %s\n", destFilename);
        fclose(srcFile);
        return 1;
    }

    while ((ch = fgetc(srcFile)) != EOF)
    {
        fputc(ch, destFile);
    }

    // Close both files
    fclose(srcFile);
    fclose(destFile);

    printf("File copied successfully to %s\n", destFilename);

    return 0;
}