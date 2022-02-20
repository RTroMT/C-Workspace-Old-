#include <stdio.h>
#include <conio.h>

void main()
{
    float a[100];
    int n;
    // nhập n
    printf("Nhap n :");
    scanf("%d", &n);
    // nhập mảng
    for (int i = 0; i < n; i++)
    {
        printf("Nhap vao phan tu thu %d", i + 1);
        scanf("%f", a + i);
    }

    // xuất mảng
    printf("mang vua nhap : \n");
    for (int i = 0; i < n; i++)
        printf("%f  ", *(a + i));

    getch();
}