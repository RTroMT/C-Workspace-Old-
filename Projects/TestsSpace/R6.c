#include <stdio.h>
#include <string.h>

void pr(int a)
{
    if (a == 0)
    {
        printf("xxxxx \n");
        printf("x   x \n");
        printf("xxxxx \n");
    }
    else if (a == 1)
    {
        printf("x \n");
        printf("x \n");
        printf("x \n");
    }
    else
    {
        printf("Invalid Number \n");
    }
}

int main()
{
    int b;
    printf("Input :");
    scanf("%d", &b);
    pr(b);
    pr(0);
}