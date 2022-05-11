#include <stdio.h>
#include <stdlib.h>

int sort(int arr[], int n){
    for (int i = 0; i < n; ++i){
        for (int j = i + 1; j < n; ++j){
            if (arr[i] > arr[j]){
                int a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }
    for (int i = 0; i < n; ++i){}
}

int calculate(int sort,int arr[], int n){
    int j = 0,i;
    for (i=0; i <= n-1; i++)
    {
        for (int j = i; j < n; j++)
        {
            j = arr[j]+arr[i+1];
            printf("Result is : %d\n", j);
            break;
        }
        
         
        // j = arr[i]+arr[i+1];
        // printf("Result is : %d\n", j);
    }
    
        
}     
                      
int main(){
    int size;
    printf("Enter The Array Size : ");
    scanf("%d",&size);
    int arr[size];
    printf("Array Elements : ");
    for (int i = 0; i <size; i++)
    {
        scanf("%d",&arr[i]);
    }

    int p = sort(arr,size);
    calculate(p,arr,size);
 
    return 0;
}
