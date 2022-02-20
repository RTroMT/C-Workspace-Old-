#include <stdio.h>

int arr[] = {9, 3, 49, 23, 12, 4, 953, 123, 394, 1, 5};

void display_array();
void update_array();
void sort_array();

int main()
{
    // Display the input array to console
    display_array();

    // Manipulate the array then display it
    update_array();
    display_array();

    // Sort the array then display it
    sort_array();
    display_array();
    return 0;
}

/*
    Display the array `arr` to screen
*/
void display_array()
{
    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

/*
    Update the array by following rule:
    - Loop from begin to end of the array. If the position x1 > x2, then swap x1 and x2
    Eg: {5,4,6,8,9,1,2}
    ->  {5,4,_,_,_,_,_}   (check position 0 and 1:  5>4 -> swap 5 and 4)
    ->  {4,5,6,_,_,_,_}   (check position 1 and 2:  5<6 -> do nothing)
    ->  {4,5,6,8,_,_,_}   (check position 2 and 3:  6<8 -> do nothing)
    ->  {4,5,6,8,9,_,_}   (check position 3 and 4:  8<9 -> do nothing)
    ->  {4,5,6,8,9,1,_}   (check position 4 and 5:  9>1 -> swap 9 and 1)
    ->  {4,5,6,8,1,9,2}   (check position 5 and 6:  9>2 -> swap 9 and 2)
    ->  {4,5,6,8,1,2,9}   end
*/
void update_array()
{
    for (int i = 0; i < (sizeof(arr) / sizeof(int) - 1); i++)
    {
        if (arr[i] > arr[i + 1])
        {
            int p1 = arr[i];     // p1 receive arr[i] value
            arr[i] = arr[i + 1]; // arr[i] receive arr[i+1] value
            arr[i + 1] = p1;     // arr[i+1] receive p1 value
        }
    }
}

/*
    Use `Bouble sort` algorithm to sort the array:
    - Link Tieng Viet: https://vi.wikipedia.org/wiki/S%E1%BA%AFp_x%E1%BA%BFp_n%E1%BB%95i_b%E1%BB%8Dt
    - Link English: https://en.wikipedia.org/wiki/Bubble_sort
    - Expected result: {1,2,4,5,6,8,9}
*/
void sort_array()
{
    for (int i1 = (sizeof(arr) / sizeof(arr[0]) - 1); i1 > 0; i1--)
    {
        for (int i = 0; i < (i1 - 1); i++)
        {
            // Check if arr[i] bigger  than arr[i+1]
            if (arr[i] > arr[i + 1])
            {
                // If bigger, swap
                int p = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = p;
            }
            // Check if arr[i]  smaller than arr[i+1]
            else
            {
                // If smaller or equal, continue checking.
                continue;
            }
            // Check until all arr[i] smaller than arr[i+1]
        }
    }
}

// Sắp xếp cao --> thấp.
