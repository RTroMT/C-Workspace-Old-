#include <stdio.h>

int result;
int i1, i2, i3;

int main()
{
    printf("Nhập số I: ");
    scanf("%d", &i1);
    printf("Nhập số II: ");
    scanf("%d", &i2);
    printf("Nhập số III: ");
    scanf("%d", &i3);

    if (i1 == 0 && i2 == 0 && i3 == 0)
    {
        printf("Proceed failed with three Zero \n");
        printf("Restart the program. \n");
    }
    else
    {
        result = i1 + i2 + i3;
        printf("Tổng : %d \n", result);
    };
}
