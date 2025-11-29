#include <stdio.h>

enum user_role
{
    ADMIN,
    USER,
    GUEST
};

int main()
{
    enum user_role current_role = GUEST;

    if (current_role == ADMIN)
    {
        printf("Welcome Admin!\n");
    }
    else if (current_role == USER)
    {
        printf("Welcome User!\n");
    }
    else if (current_role == GUEST)
    {
        printf("Welcome Guest!\n");
    }
    else
    {
        // fallback for undefined roles
    }

    return 0;
}