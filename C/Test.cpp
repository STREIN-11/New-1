#include <bits/stdc++.h>
int max(int x, int y ){
    if (x>y)
    {
        return x;
    }
    else
    {
        return y;
    }      
}
int main(void){
    int a,b,c;
    printf("Enter Your Number : ");
    scanf("%d", &a);
    printf("enter Your Number : ");
    scanf("%d", &b);
    c = max(a,b);
    printf("Greater Number is : %d", c);
    return 0;
}
