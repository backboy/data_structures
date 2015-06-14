#include "m_queue.h"
#include "stdio.h"
#include "conio.h"
#define Q_MAX 5
#define FFOR(i,a,b) for(i=a;i<b;i++)

static int N;
static int queue_array[Q_MAX];
static int m_head;
static int m_tail;
void en_queue(int x){

    //if(m_head==(m_tail+1)){printf("Q full");return;}
    queue_array[m_tail++]=x;
    m_tail=(m_tail==N)?0:m_tail;

}
int d_queue(){

    //if(m_head==m_tail){printf("Q empty");return 0;}
    int x=queue_array[m_head++];
    m_head=(m_head==N)?0:m_head;
    return x;

}

int m_queue_main()
{

    m_head=0;m_tail=0;N=Q_MAX;
    d_queue();
    int i;FFOR(i,0,10)en_queue(i+1);
    FFOR(i,0,N)printf("%d ",d_queue());
    getch();
    return 0;
}
