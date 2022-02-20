#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// define x.định hằng số thực/nguyên xử lý = bộ tiền xử lí
#define Col 20
#define Row 10

int w;
int h;
int x = 1;
int y = 1;
int me_cung[Row][Col] = {
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {3, 4, 0, 0, 0, 0, 2, 2, 2, 0, 0, 0, 2, 2, 2, 2, 0, 0, 0, 3},
    {3, 2, 2, 2, 2, 0, 3, 0, 3, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 3},
    {3, 0, 0, 0, 0, 0, 3, 0, 3, 0, 0, 0, 3, 0, 3, 2, 0, 3, 0, 3},
    {3, 0, 3, 0, 2, 2, 3, 0, 3, 0, 3, 0, 3, 0, 3, 2, 0, 0, 0, 3},
    {3, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 3, 0, 2, 2, 2, 2, 0, 3},
    {3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 0, 3, 0, 3, 0, 0, 0, 0, 3},
    {3, 2, 2, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 2, 2, 2, 3},
    {3, 0, 0, 0, 0, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 3},
    {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2}};

int kthit()
{
    int w1;
    int h1;
    if (kbhit())
    {
        int ch = getch();
        if (ch == 'd') // Di chuyển qua phải
        {

            me_cung[x][y] = 0;
            me_cung[x][y + 1] = 4;
            y = y + 1;
            return 1;
        }
        if (ch == 's') // Di chuyển qua trái
        {
            me_cung[x][y] = 0;
            me_cung[x + 1][y] = 4;
            x = x + 1;
            return 1;
        }
        if (ch == 'a') // Di chuyên lên
        {
            me_cung[x][y] = 0;
            me_cung[x][y - 1] = 4;
            x = x - 1;
            return 1;
        }
        if (ch == 'w') // di chuyển xuống
        {
            me_cung[x][y] = 0;
            me_cung[x - 1][y] = 4;
            x = x - 1;
            return 1;
        }
    }
    return 0;
}

int collision()
{
    if (x == 0 || x == Row - 1)
    {
        return 0;
    }
    else if (y == 0 || y == Col - 1)
    {
        return 0;
    }
    else
    {
        switch (x)
        {
        case 1: // Với x = 1 xét ca chạm ở các y
            if (y == 7)
            {
                return 0;
            }
            if (y == 8)
            {
                return 0;
            }
            if (y == 9)
            {
                return 0;
            }
            if (y == 13)
            {
                return 0;
            }
            if (y == 14)
            {
                return 0;
            }
            if (y == 15)
            {
                return 0;
            }
            if (y == 16)
            {
                return 0;
            }
        default:
            return 1;
        }
    }
}

void display()
{ // In map và n.vật
    system("cls");
    for (int w = 0; w < 10; w++)
    {
        for (int h = 0; h < 20; h++)
        {
            if (me_cung[w][h] == 0)
            {
                printf(" ");
            }
            else if (me_cung[w][h] == 1)
            {
                printf("_");
            }
            else if (me_cung[w][h] == 2)
            {
                printf("-");
            }
            else if (me_cung[w][h] == 3)
            {
                printf("|");
            }
            else
            {
                printf("A");
            }
        }
        printf("\n");
    }
}

/*void update()
{
    for (int w = 0; w < 10; w++)
    {
        for (int h = 0; h < 20; h++)
        {
            if (me_cung[w][h] == 4)
            {

            }
        }
    }
}*/
int main()
{
    display();
    while (1)
    {
        int bd = kthit();
        int bd2 = collision();
        if (bd == 1 && bd2 == 1)
        {
            display();
        }
        else
        {
            break;
        }
    }
}
