#include "stl_q_sort.h"
#include <stdio.h>
#include <algorithm>
#include <conio.h>
#define FFOR(i,a,b) for(i=a;i<b;i++)
typedef struct student{
    int roll_no;
    int total_mark;
}student;
using namespace std;
int comparetor(const void* a,const void* b){
    student *A=(student*)a;
    student *B=(student*)b;
    if((A->total_mark)==(B->total_mark))A->roll_no>B->roll_no?-1:1;
    else return (A->total_mark)>(B->total_mark)?-1:1;

}
int stl_q_sort_main(){
    freopen("stl_q_sort.in","r",stdin);
    int N;
    scanf("%d",&N);
    student s[N];
    int i;
    FFOR(i,0,N){s[i].roll_no=i+1;scanf("%d",&s[i].total_mark);}
    qsort(s,N,sizeof(student),comparetor);
    FFOR(i,0,N){printf("%d %d\n",s[i].roll_no,s[i].total_mark);}
    getch();
    return 0;
}
