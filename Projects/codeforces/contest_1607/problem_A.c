// https://codeforces.com/contest/1607/problem/A

/*\
- Cho n là độ dài xâu cần nhập
- Lưu tất cả các chỉ số của các kí tự trong xâu cần nhập vào một mảng
- Làm việc với mảng đó:
+ So sánh a2 vs a1, rồi tính hiệu 2 số (kết quả phải dương)
+ Tương tự cho đến a(n) và a(n-1)
- Đưa ra kết quả là tổng các hiệu.
 */

#include <stdio.h>
#include <math.h>

int main()
{
    int t = 0;
    printf("Nhap test case: ");
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        char keyboard[26] = {0};
        char input[100] = {0};
        int index[100] = {0};
        printf("\nNhap bang chu cai 26 ki tu: ");
        for (int i = 0; i < 26; i++)
        {
            scanf("%c", keyboard[i]);
        }
    }
}