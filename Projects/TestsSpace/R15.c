// Move each element of an array to the right.
// The last one will move to head of the array.
// arr[5] = {1;2;3;4;5} ---> result arr[5] = {2;1;2;3;4}

#include <stdio.h>

int arr[5] = {1, 2, 3, 4, 5};

int main()
{
    // Save last element to a variables.
    int last_element = arr[4];
    // Move to the right starting from arr[i-1] to arr[i]
    for (int i = (sizeof(arr) / sizeof(arr[0])); i >= 1; i--)
    {
        arr[i] = arr[i - 1];
    }
    // arr[0] will receive the last_element value.
    arr[0] = last_element;
    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
    {
        printf("%d ", arr[i]);
    }
}
