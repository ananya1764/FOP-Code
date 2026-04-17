#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[100];
    int choice, result;

    while (1) {
        printf("\n--- String Operations Menu ---");
        printf("\n1. Length of String (strlen)");
        printf("\n2. Copy String (strcpy)");
        printf("\n3. Concatenate Strings (strcat)");
        printf("\n4. Compare Strings (strcmp)");
        printf("\n5. Convert to Uppercase (strupr logic)");
        printf("\n6. Exit");
        printf("\nEnter your choice: ");
       
        if (scanf("%d", &choice) != 1) break;
        getchar(); // Consume newline

        switch (choice) {
            case 1:
                printf("Enter string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = 0; // Remove trailing newline
                printf("Length of string: %zu\n", strlen(str1));
                break;

            case 2:
                printf("Enter source string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = 0;
                strcpy(temp, str1);
                printf("String copied to temp: %s\n", temp);
                break;

            case 3:
                printf("Enter first string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = 0;
                printf("Enter second string: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = 0;
                strcat(str1, str2);
                printf("Concatenated string: %s\n", str1);
                break;

            case 4:
                printf("Enter first string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = 0;
                printf("Enter second string: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = 0;
                result = strcmp(str1, str2);
                if (result == 0)
                    printf("Strings are equal.\n");
                else
                    printf("Strings are not equal (Difference: %d)\n", result);
                break;

            case 5:
                printf("Enter string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = 0;
                for(int i = 0; str1[i]; i++) {
                    if(str1[i] >= 'a' && str1[i] <= 'z')
                        str1[i] = str1[i] - 32;
                }
                printf("Uppercase string: %s\n", str1);
                break;

            case 6:
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}