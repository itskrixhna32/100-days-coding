#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    int marks;
};

void show(struct Student s)
{
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll, s.marks);
}

int main()
{
    struct Student x;
    char tag[20];
    char buffer[200];

    if (!fgets(buffer, sizeof(buffer), stdin))
    {
        return 0;
    }

    sscanf(buffer, "%19s %49s %d %d", tag, x.name, &x.roll, &x.marks);

    show(x);
    return 0;
}