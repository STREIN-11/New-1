#include <stdio.h>

void create(int arr[], int x){
    for (int i = 0; i < x; i++)
    {
        printf("Your Array Elements are :%d\n", arr[i]);
    }
    
}



int main(void){
    int arr[100] = {1,2,3,4,5};
    create(arr, 6);

    return 0;
}
