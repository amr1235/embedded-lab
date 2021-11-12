#include <stdio.h>
int main(void)
{
    int i;
    int j;

    // top part
    for (j = 1; j <= 5; j++)
    {
        for (i = 1; i <= 5 - j; i++){
            printf(" ");
        }

        for (i = 1; i <= 2 * j - 1; i++){
            printf("*");
        }

        printf("\n");
    }
    // bottom part
    for (j = 1; j <= 4; j++)
    {
        for (i = 1; i <= j; i++){
            printf(" ");
        }

        for (i = 1; i <= 2 * (5 - j) - 1; i++){
            printf("*");
        }

        printf("\n");
    }
    return 0;
}