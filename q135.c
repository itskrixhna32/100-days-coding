#include <stdio.h>

enum alpha
{
    A = 10,
    B,
    C
};

int main()
{
    enum alpha letter = A;

    while (letter <= C)
    {
        if (letter == A)
            printf("A=%d\n", letter);
        else if (letter == B)
            printf("B=%d\n", letter);
        else if (letter == C)
            printf("C=%d\n", letter);

        letter = (enum alpha)(letter + 1);
    }

    return 0;
}