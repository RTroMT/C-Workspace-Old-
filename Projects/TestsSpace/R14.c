#include <stdio.h>
#include <conio.h>
#include <math.h>

// How sizeof()'s used. https://www.geeksforgeeks.org/using-sizof-operator-with-array-paratmeters/
// Size_t will automatically change the data type if there isn't enough memory for the variable.
// Size_t will be the same as unsigned_int as default.
/*
1. Tính trung bình cộng các số lẻ ở vị trí chẵn
2. Tìm số lớn nhất trong mảng vừa nhập
3. Tìm số lớn nhì trong mảng.
3. Tìm vị trí các số nhỏ nhất trong mảng
4. Đếm các số chính phương có trong mảng
*/

void TBC_VTriChan(int arr[], size_t arr_size) // Use arr_size instead of sizeof() in this function.
{
    double tong = 0;
    int bd = 0;
    int i;
    int *Z = arr;
    for (i = 0; i <= arr_size; i += 2) // i chạy ở các vị trí chẵn
    {
        tong = tong + *(Z + i);
        bd = bd + 1; // BD đếm số vị trí chẵn trong mảng
    }
    double TBC = tong / bd;
    int result = round(TBC);
    printf("TBC: %d \n", result);
}

void biggest(int arr[], size_t arr_size)
{
    int temp_big = 0;
    int *p = arr;
    for (int i = 0; i < arr_size; i++)
    {
        if (*(arr + i) > temp_big)
        {
            temp_big = *(arr + i);
        }
    }
    printf("Biggest number: %d\n", temp_big);
}

void big2nd(int arr[], size_t arr_size)
{
    /*
    First, save first temp_biggest to a variable<i1>
    If there's bigger, save temp_biggest to the new biggest one
    Then save the ex_biggest to a 2nd variable<i2>
    Continue...
    */
    int temp_biggest = 0;
    int temp_2nd = 0;
    for (int i = 0; i < arr_size; i++)
    {
        if (arr[i] > temp_biggest)
        {
            temp_2nd = temp_biggest;
            temp_biggest = arr[i];
        }
    }
    printf("2nd: %d \n", temp_2nd);
}

void smallest_loc(int arr[], size_t arr_size)
{
    int temp_smallest = arr[0];
    int smallest = 0;
    for (int i = 1; i < arr_size; i++)
    {
        if (temp_smallest >= arr[i])
        {
            temp_smallest = arr[i];
        }
    }
    printf("Smallest number: %d\n", temp_smallest); // Find smallest.
    printf("Smallest number location: ");
    for (int i = 0; i < arr_size; i++)
    {
        if (arr[i] == temp_smallest)
        {
            printf("arr[%d]  ", i);
        }
    }
    printf("\n");
}

void SCP(int arr[], size_t arr_size)
{
    printf("So chinh phuong trong mang la: \n");
    for (int i = 0; i < arr_size; i++)
    {
        for (int i1 = 0; i1 < arr[i]; i1++)
        {
            if ((i1 * i1) == arr[i])
            {
                printf("arr[%d] = %d \n", i, arr[i]);
            }
            else
            {
                continue;
            }
        }
    }
}

int main()
{
    // int n;
    // printf("Nhập độ rộng mảng: \n");
    // scanf("%d", &n);
    // int arr[n];
    // printf("Nhập giá trị các phần tử mảng: ");
    // for (int bd = 0; bd < n; bd++)
    // {
    //     scanf("%d", &arr[bd]);
    // }
    int arr[5] = {22, 5, 8, 25, 20};
    TBC_VTriChan(arr, 5);
    biggest(arr, 5);
    big2nd(arr, 5);
    smallest_loc(arr, 5);
    SCP(arr, 5);
    return 0;
}
