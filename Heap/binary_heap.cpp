#include<bits/stdc++.h>
using namespace std;

void swap(int *x,int* y);
class heap
{
    int *head;
    int cap;
    int size;
public:
    minheap(int cap);

    int parent(int i){return (i-1)/2;}
    int left(int i){return (2*i +1);}
    int right(int i){return (2*i +2);}

    int extractmin();

    void decreasekey(int i,int new_val);

    int getmin(){return head[0];}

    void delete_key(int i);
    void insert(int k);
};
heap::minheap(int cap){

}

int main(){

return 0;
}
