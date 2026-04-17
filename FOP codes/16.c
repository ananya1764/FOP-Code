#include <stdio.h>

int main()
{
    int n, i;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n], even[n], odd[n];
    int e = 0, o = 0;

    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            even[e++] = arr[i];
        }
        else
        {
            odd[o++] = arr[i];
        }
    }

    printf("\nEven numbers:\n");
    for(i = 0; i < e; i++)
    {
        printf("%d ", even[i]);
    }

    printf("\nOdd numbers:\n");
    for(i = 0; i < o; i++)
    {
        printf("%d ", odd[i]);
    }

    return 0;
}