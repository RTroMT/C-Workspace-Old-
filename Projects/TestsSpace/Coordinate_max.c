#include <stdio.h>
#include <string.h>
#include <math.h>

struct point
{
    int x;
    int y;
} point[1000];

int check(struct point point[], int a)
{
    int far_max_point;
    double far_max;
    double S[1000];
    // Calculating the distance between the point and the coordinate center.
    for (int n1 = 0; n1 < a; n1 = n1 + 1)
    {
        S[n1] = sqrt((point[n1].x) * (point[n1].x) + (point[n1].y) * (point[n1].y));
    }
    // Making a distance comparision
    far_max = S[0];
    for (int n2 = 0; n2 < a; n2 = n2 + 1)
    {
        if (far_max < S[n2 + 1])
        {
            far_max = S[n2 + 1];
        }
    }
    // Returning the farthest point
    for (int n3 = 0; n3 < a; n3 = n3 + 1)
    {
        if (S[n3] == far_max)
        {
            far_max_point = n3 + 1;
        };
    }
    return far_max_point;
}

int main()
{
    int so_diem, diem;
    int n = 0;
    printf("Nhap vao so cac diem: \n");
    scanf("%d", &so_diem);
    while (n < so_diem)
    {
        printf("Nhap toa do diem %d:\n", (n + 1));
        scanf("%d %d", &point[n].x, &point[n].y);
        n += 1;
    };
    diem = check(point, so_diem);
    printf("Diem xa nhat la diem so %d\n", diem);
    return 0;
}