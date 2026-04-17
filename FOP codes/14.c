
#include <stdio.h>
#include <math.h>

int main()
{
    int n, rem, i = 0;
    int dec = 0;

    printf("Enter binary number: ");
    scanf("%d", &n);

    while(n > 0)
    {
        rem = n % 10;
        dec = dec + rem * pow(2, i);
        n = n / 10;
        i++;
    }

    printf("Decimal = %d", dec);

    return 0;
}