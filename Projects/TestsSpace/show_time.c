#include <stdio.h>

#include <time.h>   // Get system time
#include <unistd.h> // Library for sleep
#include <stdlib.h>

void get_time(int arr[3])
{
    time_t rawtime;
    struct tm *timeinfo;
    time(&rawtime);
    timeinfo = localtime(&rawtime);
    arr[0] = timeinfo->tm_hour;
    arr[1] = timeinfo->tm_min;
    arr[2] = timeinfo->tm_sec;
}

/*
x  x  x       xxxx xxxx
x  x  x   x      x x  x
x  xxxx       xxxx x  x
x     x   x      x x  x
x     x       xxxx xxxx
*/
#define ROW 5
#define COL 37

#define W 4
char mang[ROW][COL] = {
    "                                    ",
    "           x             x          ",
    "                                    ",
    "           x             x          ",
    "                                    "};

const char n0[ROW][W] = {
    "xxxx",
    "x  x",
    "x  x",
    "x  x",
    "xxxx"};
const char n1[ROW][W] = {
    "  x ",
    "  x ",
    "  x ",
    "  x ",
    "  x "};

const char n2[ROW][W] = {
    "xxxx",
    "   x",
    "xxxx",
    "x   ",
    "xxxx"};

const char n3[ROW][W] = {
    "xxxx",
    "   x",
    "xxxx",
    "   x",
    "xxxx"};
const char n4[ROW][W] = {
    "x  x",
    "x  x",
    "xxxx",
    "   x",
    "   x"};
const char n5[ROW][W] = {
    "xxxx",
    "x   ",
    "xxxx",
    "   x",
    "xxxx"};
const char n6[ROW][W] = {
    "xxxx",
    "x   ",
    "xxxx",
    "x  x",
    "xxxx"};
const char n7[ROW][W] = {
    "xxxx",
    "   x",
    "   x",
    "   x",
    "   x"};

const char n8[ROW][W] = {
    "xxxx",
    "x  x",
    "xxxx",
    "x  x",
    "xxxx"};

const char n9[ROW][W] = {
    "xxxx",
    "x  x",
    "xxxx",
    "   x",
    "xxxx"};

const char **make_big(int a)
{
    switch (a)
    {
    case 0:
        return n0;
    case 1:
        return n1;
    case 2:
        return n2;
    case 3:
        return n3;
    case 4:
        return n4;
    case 5:
        return n5;
    case 6:
        return n6;
    case 7:
        return n7;
    case 8:
        return n8;
    case 9:
        return n9;
    default:
        return n0;
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
    fill_array(0, m);
    m = make_big(d);
    fill_array(6, m);

    c = min / 10;
    d = min % 10;
    m = make_big(c);
    fill_array(14, m);
    m = make_big(d);
    fill_array(19, m);

    c = second / 10;
    d = second % 10;
    m = make_big(c);
    fill_array(28, m);
    m = make_big(d);
    fill_array(33, m);
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
        display(COL, ROW, mang);
        fflush(stdout);
        sleep(1);
    }
    return 0;
}