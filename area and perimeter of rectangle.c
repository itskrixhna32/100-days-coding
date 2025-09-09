#include <stdio.h>
int main()
{
    int length, breadth, area, perimeter;
    printf("enter length of rectangle: ");
    scanf("%d", &length);
    printf("enter breadth of rectangle: ");
    scanf("%d", &breadth);
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    printf("area of rectangle is: %d\n", area);
    printf("perimeter of rectangle is: %d\n", perimeter);
    return 0;

}