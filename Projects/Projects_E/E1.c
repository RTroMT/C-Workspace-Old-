#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/*
  Scan input from terminal
  - Return the integer if the input is a positive integer
  - Return -1 if the input is invalid (eg: if it's a string)
*/

/*
int get_input()
{
    printf("Input: ");
    while (1)
    {
        char x_in[] = getch();
        if (x_in > 57 && x_in < 48) // Input isn't number
        {
            return -1;
        }
        else if (x_in <= 57 && x_in >= 48) // Valid in range 0-9
        {
            return x_in;
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
*/

int get_input()
{
    char x_char[1000];
    int i = 0;
    scanf("%s", &x_char);
    if (x_char[i] != NULL) // Till string's null --> end.
    {
        if (x_char[i] < '0' || x_char[i] > '9')
        {
            return -1;
        }
        else
        {
            int x_out = atoi(x_char); // atoi() converts string to int.
            return x_out;
        }
    }
}

/*
    Check if the number is odd
    - Return 1 if the number is an odd number
    - Return 0 if the number is not an odd number
*/
int check_odd(int n)
{
    if (n % 2 == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{

    int number = get_input();
    if (number != -1)
    {
        int ret = check_odd(number);
        if (ret)
        {
            printf("%d is an odd number", number);
        }
        else
        {
            printf("%d is not an odd number", number);
        }
        return 0;
    }
    else
    {
        printf("Invalid input!");
        return 0;
    }
}