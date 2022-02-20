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

int main()
{
    int time_array[3];
    for (int i = 0; i < 1000; i++)
    {
        get_time(time_array);
        printf("\r%02d:%02d:%02d", time_array[0], time_array[1], time_array[2]);
        fflush(stdout);
        sleep(1);
    }
    return 0;
}
