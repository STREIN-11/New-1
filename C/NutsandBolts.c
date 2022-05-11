#include <stdio.h>

int calculate(char Nuts[],  char arr[], int size, int length){
    for (int i = 0; i <=size ; i++)
    {
        if (Nuts[i] == arr[i])
        {
            printf("Same");
        }
        else
        {
            Nuts[i] = arr[i];
        }    
    }
    for (int i = 1; i <=size; i++)
    {
        printf("Your Symbols are : %c\n",Nuts[i]);
    }
    
}

int main(){
    char arr[]={'=','!','#','$','%','&','*','@','^','~'};
    int length = sizeof(arr)/sizeof(arr[0]);

    int size;  
    printf("Enter Array Length : ");
    scanf("%d",&size);
    char Nuts[size],Bolts[size];
    printf("Enter Symbols :");
    for (int i=0; i<=size; i++)
    {
        scanf("%c",&Nuts[i]);
    }
    // for (int i = 1; i <=size; i++)
    // {
    //     printf("Your Symbols are : %c\n",Nuts[i]);
    // }
    calculate(Nuts,arr,size,length);
    
    

    return 0;
}
