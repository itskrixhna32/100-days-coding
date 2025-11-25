#include <stdio.h>

int main()
{
    int count;
    printf("Enter number of elements: ");

    scanf("%d", &count);

    int numbers[count];

    printf("Enter the elements:\n");

    for (int index = 0; index < count; index++)
    {

        scanf("%d", &numbers[index]);
    }
    for (int i = 0; i < count; i++)
    {
        int found = -1;

        for (int k = i - 1; k >= 0; k--)
        {

            if (numbers[k] > numbers[i])
            {
                found = numbers[k];
                break;
            }
        }

        if (i == count - 1)
        {
            printf("%d", found);
        }
        else
        {
            printf("%d, ", found);
        }
    }

    return 0;
}