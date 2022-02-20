// https://codeforces.com/contest/1614
// Luu tat ca cac gia tri trong dong 2 thoa man
// dieu kien min_price - max_price vao 1 mang.
// Sap xep mang do theo chieu min -> max
// Cong cac phan tu trong mang trong khi gia tri tong van be hon
// tong tien, dong thoi dung bien dem de dem so phan tu da cong.
// Tra ve bien dem.

#include <stdio.h>
#include <conio.h>

void sort(int arr[], int length)
{
    int temp = 0;
    for (int i = (length - 1); i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        };
    };
}

int main()
{
    int t = 0;
    scanf("%d", &t);
    for (int i1 = 1; i1 <= t; i1++)
    {
        int n = 0, l = 0, r = 0, k = 0;
        scanf("%d%d%d%d", &n, &l, &r, &k);
        int price[100] = {0};          // Input Line 1
        for (int i2 = 0; i2 < n; i2++) // Input line 2
        {
            scanf("%d", &price[i2]);
        };
        int suitable[100] = {0};
        int bd1 = 0;
        for (int i3 = 0; i3 < n; i3++) // Luu cac gia tri phu hop vao mang
        {
            if ((price[i3] >= l) && (price[i3] <= r))
            {
                suitable[bd1] = price[i3];
                bd1 += 1;
            };
        };
        // Sap xep mang
        sort(suitable, bd1);
        int tong = 0, bd = 0;
        for (int i = 0; i < bd1; i++)
        {
            tong = tong + suitable[i];
            if (tong > k)
            {
                break;
            }
            bd += 1;
        };
        printf("%d\n", bd);
    };
    return 0;
}