#include <stdio.h>

int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n");

        i = 0;

        while (i < 10)
        {
                putchar(i + '0');  // print the character equivalent to the integer value of i
                i++;  // increment i by 1 during each iteration
        }

        printf("\nInfinite loop avoided! \\o/\n");

        return (0);
}
