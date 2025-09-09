
#include <stdio.h>
int main()
{
    int temperature;
    printf("enter the temperature in celsius: ");
    scanf("%d",&temperature);

    float fahrenheit;
    fahrenheit = (9.0/5 * temperature) + 32;
    printf("temperature in fahrenheit is:%f",fahrenheit);
    return 0;
}