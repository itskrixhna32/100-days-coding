#include <stdio.h>

enum result_code
{
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main()
{
    enum result_code res = FAILURE;

    if (res == SUCCESS)
    {
        printf("Operation succeeded\n");
    }
    else if (res == FAILURE)
    {
        printf("Operation failed\n");
    }
    else if (res == TIMEOUT)
    {
        printf("Operation timed out\n");
    }
    else
    {
        // no meaningful output
    }

    return 0;
}