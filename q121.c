#include <stdio.h>

int main()
{
    // Declare file pointer and variables for name and age
    FILE *file;
    char name[100];
    int age;

    // Open the file info.txt in write mode ("w")
    file = fopen("info.txt", "w");
    if (file == NULL)
    {
        printf("Error: Unable to open file.\n");
        return 1; // Exit if file cannot be opened
    }

    // Prompt user to enter their name
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    // Remove the trailing newline character from the input string if present
    size_t length = 0;
    while (name[length] != '\0')
    {
        length++;
    }
    if (length > 0 && name[length - 1] == '\n')
    {
        name[length - 1] = '\0';
    }

    // Prompt user to enter their age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Write the user's name and age to the file using fprintf
    fprintf(file, "Name: %s, Age: %d\n", name, age);

    // Close the file to save data
    fclose(file);

    // Notify user that data was written successfully
    printf("File created successfully! Data written to info.txt\n");

    return 0;
}