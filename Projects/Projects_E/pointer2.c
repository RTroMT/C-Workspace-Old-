// Use pointer to calculate the length of a string.

#include <stdio.h>

char str[1000] = "C is fun";

int main()
{
    char *p = str;
    int quantity = 0;
    while (*p != '\0')
    {
        quantity += 1;
        // move the ptr pointer to the next memory location
        p++;
    }
    printf("%d", quantity);
    return 0;
}

