#include <stdio.h>
#include <stdlib.h>

struct que
{
    int size;
    int f;
    int r;
    int *arr;
};

struct cque
{
    int csize;
    int cf;
    int cr;
    int *ar;
};

int full(struct que *q)
{
    if (q->r == q->size - 1)
        return 1;
    else
        return 0;
}

int empty(struct que *q)
{
    if (q->r == q->f)
        return 1;
    else
        return 0;
}

void enque(struct que *q, int val)
{
    if (full(q))
        printf("This Queue is Full");
    else
        q->r++;
    q->arr[q->r] = val;
    printf("%d\n", val);
}
int deque(struct que *q)
{
    int a = -1;
    if (empty(q))
        printf("This Queue is Empty");
    else
        q->f++;
        a = q->arr[q->f];
    printf("Dequeue Element : %d\n", a);
}

int cfull(struct cque *cq)
{
    if ((cq->cr + 1) % cq->csize == cq->cf)
    {
        return 1;
    }
    return 0;
}

int cempty(struct cque *cq){
    if(cq->cr==cq->cf){
        return 1;
    }
    return 0;
}

void cenqueue(struct cque *cq, int val){
    if(cfull(cq)){
        printf("This Queue is full\n");
    }
    else{
        cq->cr = (cq->cr +1)%cq->csize;
        cq->ar[cq->cr] = val; 
        printf("Circular element: %d\n", val);
    }
}
 
int cdequeue(struct cque *cq){
    int a = -1;
    if(cempty(cq)){
        printf("This Queue is empty");
    }
    else
        cq->cf = (cq->cf +1)%cq->csize;
        a = cq->ar[cq->cf]; 
    printf("Circular Dequeue Element : %d\n", a);
}

int main()
{
    int n;
    printf("1.Que, 2.Circular Que : ");
    scanf("%d", &n);
    if (n == 1)
    {
        struct que q;
        q.size = 10;
        q.f = q.r = -1;
        q.arr = (int *)malloc(q.size * sizeof(int));
        enque(&q, 14);
        enque(&q, 11);
        if (empty(&q))
            printf("The Queue is Empty\n");
        else
            printf("Queue is not Empty\n");
        deque(&q);
    }
    else
    {
        struct cque cq;
        cq.csize = 5;
        cq.cf = cq.cr = 0;
        cq.ar = (int *)malloc(cq.csize * sizeof(int));
        cenqueue(&cq, 14);
        cenqueue(&cq, 11);
        cenqueue(&cq, 21);
        cdequeue(&cq);
        if (cempty(&cq))
            printf("The Queue is empty\n");
        if (cfull(&cq))
            printf("Queue is full\n");
    }

    return 0;
}
