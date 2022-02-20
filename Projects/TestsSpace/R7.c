/*
Progress bar:  ======---- 60%
*/
#include <stdio.h>
#include <string.h>

int number;
int number2;

void bx(int a)
{
    int i1;
    int i2;
    printf("Progress:   ");
    for (i1 = 1; i1 <= a; i1++)
    {
        printf("=");
    }
    for (i2 = a; i2 < 10; i2++)
    {
        printf("-");
    }
    printf(" %d%% \n", number);
}

int main()
{
    printf("Nhap phan tram: ");
    scanf("%d", &number);
    if (number <= 100 && number >= 0)
    {
        number2 = number / 10;
        bx(number2);
    }
    else
    {
        printf("Out of range! Restart the program. \n");
    }
    return 0;
}