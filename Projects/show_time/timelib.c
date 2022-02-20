#include <time.h>
#include "mytimelib.h"

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