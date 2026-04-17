#include <stdio.h>

int main()
{
    int num, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Digits in reverse order: ");

    while(num != 0)
    {
        remainder = num % 10;  
        printf("%d", remainder);
        num = num / 10;         
    }

    return 0;
}