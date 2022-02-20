#include <stdio.h>

// Get system time
#include <unistd.h> // Library for sleep
#include <stdlib.h>
#include "mytimelib.h"
#include "number.h"
/*
x  x  x       xxxx xxxx
x  x  x   x      x x  x
x  xxxx       xxxx x  x
x     x   x      x x  x
x     x       xxxx xxxx
*/

char mang[ROW][COL] = {
    "                                    ",
    "           x             x          ",
    "                                    ",
    "           x             x          ",
    "                                    "};

const char **make_big(int a)
{
    switch (a)
    {
    case 0:
        return (const char **)n0;
    case 1:
        return (const char **)n1;
    case 2:
        return (const char **)n2;
    case 3:
        return (const char **)n3;
    case 4:
        return (const char **)n4;
    case 5:
        return (const char **)n5;
    case 6:
        return (const char **)n6;
    case 7:
        return (const char **)n7;
    case 8:
        return (const char **)n8;
    case 9:
        return (const char **)n9;
    default:
        return (const char **)n0;
    }
}

void display(int w, int h, char *m)
{
    for (int j = 0; j < h; j++)
    {
        for (int i = 0; i < w; i++)
        {
            printf("%c", m[j * w + i]);
        }
        printf("\n");
    }
}

void fill_array(int pos, const char x[ROW][W])
{
    for (int j = 0; j < 5; j++)
    {
        for (int i = 0; i < 4; i++)
        {
            mang[j][i + pos] = x[j][i];
        }
    }
}

void fill_in(int time_array[3])
{
    int hour = time_array[0];
    int min = time_array[1];
    int second = time_array[2];
    const char **m;
    int c, d;

    c = hour / 10;
    d = hour % 10;
    m = make_big(c);
    fill_array(0, (const char(*)[5])m);
    m = make_big(d);
    fill_array(6, (const char(*)[5])m);

    c = min / 10;
    d = min % 10;
    m = make_big(c);
    fill_array(14, (const char(*)[5])m);
    m = make_big(d);
    fill_array(19, (const char(*)[5])m);

    c = second / 10;
    d = second % 10;
    m = make_big(c);
    fill_array(28, (const char(*)[5])m);
    m = make_big(d);
    fill_array(33, (const char(*)[5])m);
}

int main()
{
    int time_array[3];

    for (int i = 0; i < 10; i++)
    {
        get_time(time_array);
        system("cls");
        printf("\r%02d:%02d:%02d\n", time_array[0], time_array[1], time_array[2]);
        fill_in(time_array);
        display(COL, ROW, (char *)mang);
        fflush(stdout);
        sleep(1);
    }
    return 0;
}