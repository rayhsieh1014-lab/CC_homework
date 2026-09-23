#include <stdio.h>

int main(void)
{
    int first, second;

    printf("Enter two integers: ");
    if (scanf("%d %d", &first, &second) != 2)
        return 1;

    if (second == 0)
    {
        printf("The second integer must not be zero.\n");
        return 1;
    }

    if (second == -1)
        printf("%d is a multiple of %d.\n", first, second);
    else if (first % second == 0)
        printf("%d is a multiple of %d.\n", first, second);
    else
        printf("%d is not a multiple of %d.\n", first, second);

    return 0;
}