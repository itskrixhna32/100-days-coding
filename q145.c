#include <stdio.h>

struct Stud
{
    char nm[50];
    int r;
    int m;
};

struct Stud pickTop(struct Stud a[], int n)
{
    int i, best = 0;
    for (i = 1; i < n; i++)
    {
        if (a[i].m > a[best].m)
        {
            best = i;
        }
    }
    return a[best];
}

int main()
{
    int n, i;
    struct Stud s[60];

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%s %d %d", s[i].nm, &s[i].r, &s[i].m);
    }

    struct Stud t = pickTop(s, n);

    printf("Top Student: %s | Roll: %d | Marks: %d\n", t.nm, t.r, t.m);

    return 0;
}