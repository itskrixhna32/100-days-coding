#include <stdio.h>

enum signal
{
    RED,
    YELLOW,
    GREEN
};

int main()
{
    enum signal light_status = GREEN;

    if (light_status == RED)
    {
        printf("Stop\n");
    }
    else if (light_status == YELLOW)
    {
        printf("Wait\n");
    }
    else if (light_status == GREEN)
    {
        printf("Go\n");
    }
    else
    {
        // fallback case, neutral no output
    }

    return 0;
}