#include "stl_queue.h"
#include <stdio.h>
#include <conio.h>
#include <algorithm>
#include <queue>
#define FFOR(i,a,b) for(i=a;i<b;i++)
using namespace std;
int stl_queue_main(){

    //printf("STL queue");
    freopen("stl_q_sort.in","r",stdin);
    int N;
    scanf("%d",&N);
    queue<int> s;
    int i;
    FFOR(i,0,N){int x; scanf("%d",&x);s.push(x);}
    printf("SIZE=%d FRONT=%d BACK=%d\n",s.size(),s.front(),s.back());
    while(!s.empty()){
        int x=s.front();
        printf("%d ",x);
        s.pop();
    }
    getch();
    return 0;
}
