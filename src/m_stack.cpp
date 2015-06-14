#include "m_stack.h"
#include "stdio.h"
#include "conio.h"
#include "stack"
#include<vector>
#define FFOR(i,a,b) for(i=a;i<b;i++)


using namespace std;

int m_stack_main(){

    //printf("Hello Stack");
    vector<int> v(10,-1);
    int i;
    //FFOR(i,0,10)v.push_back(i);
    FFOR(i,0,v.size())printf("%d ",v[i]);
    getch();
    return 0;


}
