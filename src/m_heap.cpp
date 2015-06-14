#include "m_heap.h"
#include "stdio.h"
#include "conio.h"
#define FFOR(i,a,b) for(i=a;i<b;i++)
static int heap_size;
void max_heapify(int A[],int i){

    int l,r,largest;
    l=2*i;
    r=2*i+1;
    if(l<=heap_size && A[l]>A[i])largest=l;
    else largest=i;
    if(r<=heap_size && A[r]>A[largest])largest=r;
    if(largest!=i){int temp=A[i];A[i]=A[largest];A[largest]=temp;max_heapify(A,largest);}

}
void build_max_heap(int A[]){
    int i;
    for(i=(heap_size)/2;i>=1;i--){max_heapify(A,i);}

}
int m_heap_main(){

    int i;
    int A[]={-1,4,1,3,2,16,9,10,14,8,7};
    heap_size=sizeof(A)/sizeof(int);
    heap_size--;//ommit extra -1 at index 0
    build_max_heap(A);
    FFOR(i,1,heap_size+1)printf("%d ",A[i]);
    getch();
    return 0;

}
