#include <stdio.h>

int main()
{
    int length;
    printf("Enter the size of the array: ");
    scanf("%d", &length);

    int numbers[length];
    printf("Enter %d integer values:\n", length);

    for (int index = 0; index < length; index++)
    {
        scanf("%d", &numbers[index]);
    }

    int foundGreater;

    for (int i = 0; i < length; i++)
    {
        foundGreater = -1;
        for (int k = i + 1; k < length; k++)
        {

            if (numbers[k] > numbers[i])
            {
                foundGreater = numbers[k];

                break;
            }
        }
        printf("%d", foundGreater);
        if (i < length - 1)
        {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}