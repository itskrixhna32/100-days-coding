#include <stdio.h>

struct Stud
{
    char nm[40];
    int rno;
    int mk;
};

int main()
{

    int count;
    printf("How many students? ");
    scanf("%d", &count);

    struct Stud st[count];

    printf("\nEnter data (name roll marks):\n");
    for (int i = 0; i < count; i++)
    {
        scanf("%s %d %d", st[i].nm, &st[i].rno, &st[i].mk);
    }

    int pos = 0;

    // just checking who has highest marks
    for (int j = 1; j < count; j++)
    {
        if (st[j].mk > st[pos].mk)
        {
            pos = j;
        }
    }

    printf("\nTopper: %s (Marks: %d)\n", st[pos].nm, st[pos].mk);

    return 0;
}