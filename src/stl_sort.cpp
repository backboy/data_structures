#include "stl_sort.h"
#include <stdio.h>
#include <conio.h>
#include <algorithm>
#define FFOR(i,a,b) for(i=a;i<b;i++)

using namespace std;
int stl_sort_main(){

    freopen("stl_q_sort.in","r",stdin);
    int N;
    scanf("%d",&N);
    int A[N];
    int i;
    FFOR(i,0,N)scanf("%d",&A[i]);
    sort(A,A+N);
    FFOR(i,0,N)printf("%d ",A[i]);
    getch();
    return 0;
}
