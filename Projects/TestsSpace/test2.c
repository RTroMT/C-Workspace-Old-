#include <stdio.h>
#include <conio.h>

/*
  Scan input from terminal
  - Return the integer if the input is a positive integer
  - Return -1 if the input is invalid (eg: if it's a string)
*/
int get_input()
{
    printf("Input: ");
    while (1)
    {
        int x_in = getch();
        char x_char = getch();
        if (x_in > 57 && x_in < 48) // Input isn't number
        {
            return -1;
        }
        else if (x_in <= 57 && x_in >= 48) // Valid in range 0-9
        {
            return x_char;
        }
        else if (x_in == 13) // Enter will stop function
        {
            break;
        }
        else
        {
            return 0;
        }
    }
}

int main()
{
    char x = get_input();
    printf("%c \n", x);
    return 0;
}