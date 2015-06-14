#include "stl_stack.h"
#include <stdio.h>
#include <conio.h>
#include <algorithm>
#include <stack>
#define FFOR(i,a,b) for(i=a;i<b;i++)
using namespace std;

int stl_stack_main(){

    //printf("STL stack");
    freopen("stl_q_sort.in","r",stdin);
    int N;
    scanf("%d",&N);
    stack<int> s;
    int i;
    FFOR(i,0,N){int x; scanf("%d",&x);s.push(x);}
    while(!s.empty()){
        int x=s.top();
        printf("%d ",x);
        s.pop();
    }
    getch();
    return 0;


}
