#include <stdio.h>
#include <string.h>
#include <unistd.h>

void bx(int percentage)
{
    int i1;
    int i2;
    int bd2;
    char output[100] = {0};
    sprintf(output, "Progress:   ");
    int a = percentage / 10;
    for (i1 = 1; i1 <= a; i1++)
    {
        strcat(output, "=");
    }
    for (i2 = a; i2 < 10; i2++)
    {
        strcat(output, "-");
    }
    sprintf(output, "%s %d%% ", output, percentage);
    printf("\r%s", output);
}

int main()
{
    int number = 100;
    int number2 = 0;
    int bd;

    if (number <= 100 && number >= 0)
    {
        for (bd = 0; bd <= number; ++bd)
        {
            bx(bd);
            sleep(1);
        }
    }
    else
    {
        printf("Out of range! Restart the program. \n");
    }
    return 0;
}