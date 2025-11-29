#include <stdio.h>

struct date
{
    int d, m, y;
};

struct emp
{
    char naam[60];
    int id;
    struct date jdate;
};

int main()
{

    struct emp e1;

    printf("enter name : ");
    scanf(" %[^\n]", e1.naam);

    printf("enter id : ");
    scanf("%d", &e1.id);

    printf("enter join date (dd mm yyyy) : ");
    scanf("%d %d %d", &e1.jdate.d, &e1.jdate.m, &e1.jdate.y);

    // printing (kinda messy)
    printf("\nName: %s | ID: %d | Joining Date: %d/%d/%d\n",
           e1.naam, e1.id, e1.jdate.d, e1.jdate.m, e1.jdate.y);

    return 0;
}