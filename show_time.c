#include <stdio.h>

#include <time.h>   // Get system time
#include <unistd.h> // Library for sleep

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
x x  x       xxxx xxxx
x x  x   x      x x  x
x xxxx       xxxx x  x
x    x   x      x x  x
x    x       xxxx xxxx
*/
char *mang[] = {"x x  x    xxxx xxxx",
                "x x  x  x    x x  x",
                "x xxxx    xxxx x  x",
                "x    x  x    x x  x",
                "x    x    xxxx xxxx"};

void display(char *mang[], int w, int h)
{
    for (int j = 0; j < h; j++)
    {
        for (int i = 0; i < w; i++)
        {
            printf("%c", mang[j][i]);
        }
        printf("\n");
    }
}

void mk_big(char *mang2[], int nb_in)
{
    switch (nb_in)
    {
    case 0:
    }
}

void fill_in(char *mang[], int time_array[])
{
    int hour = time_array[0];
    int min = time_array[1];
    int sec = time_array[2];
}

int main()
{
    int time_array[3];
    display(mang, 19, 5);
    for (int i = 0; i < 10; i++)
    {
        get_time(time_array);
        printf("\r%02d:%02d:%02d", time_array[0], time_array[1], time_array[2]);
        fflush(stdout);
        sleep(1);
    }
    return 0;
}