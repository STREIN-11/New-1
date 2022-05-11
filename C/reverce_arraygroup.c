#include <stdio.h>

int reverce(int arr[], int n,int size)
{
    int temp,tm;
    for (int i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    
}

// int rev( int arr[], int n, int size)
// {
//     int temp;
//     for (int i = n + 1; i < size; i++)
//     {
//         temp = arr[i];
//         arr[i] = arr[size - i - 1];
//         arr[size - i - 1] = temp;
//     }
    
// }

int calculate(int reverce, int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Result is : %d\n", arr[i]);
    }
}

int main()
{
    int size, num1;
    printf("Enter Length of the Array : ");
    scanf("%d", &size);
    printf("Enter Num : ");
    scanf("%d", &num1);
    int arr[size];
    printf("Enter Array Elements : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int t = reverce(arr,num1,size);
    // int p = rev(arr, num1, size);
    calculate(t, arr, size);

    return 0;
}
