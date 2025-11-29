#include <stdio.h>

enum Color
{
    RED,
    YELLOW,
    GREEN
};

int main()
{
    // Array of enum names as strings
    const char *names[] = {"RED", "YELLOW", "GREEN"};
    // Loop through enum values
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("%s=%d\n", names[i], i);
    }
    return 0;
}