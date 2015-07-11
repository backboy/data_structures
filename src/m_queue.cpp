#include "m_queue.h"
#include "stdio.h"
#include "conio.h"
#define Q_MAX 5
#define FFOR(i,a,b) for(i=a;i<b;i++)

static int N;
static int queue_array[Q_MAX];
static int head;
static int tail;
void en_queue(int x){

    if(tail>=Q_MAX){printf("Q full\n");return;}
    queue_array[tail]=x;
    tail++;


}
int d_queue(){

    if(head==tail){printf("Q empty\n");return -1;}
    int x=queue_array[head];
    head++;
    return x;

}

int m_queue_main()
{

    head=0;tail=0;N=Q_MAX;
    d_queue();
    int i;FFOR(i,0,N+1)en_queue(i+1);
    int x;
    while((x=d_queue())!=-1)printf("%d\n",x);
    getch();
    return 0;
}
