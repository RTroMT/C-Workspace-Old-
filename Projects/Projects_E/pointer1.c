#include <stdio.h>

// Use pointer to calculate the sum of two variables.

int main()
{
    int i1, i2;
    printf("Nhap 2 so nguyen: ");
    scanf("%d %d", &i1, &i2);
    int *p1 = &i1;
    int *p2 = &i2;
    printf("Sum: %d", *p1 + *p2);
    return 0;
}