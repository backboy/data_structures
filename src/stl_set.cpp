#include "stl_set.h"
#include <iostream>
#include <set>
#include <conio.h>
#define FFOR(i,a,b) for(i=a;i<b;i++)

using namespace std;
int stl_set_main()
{

    //printf("Set");
    set<int> s;
    int i,x=50;
    //insert
    for(i=100;i>0;i--)s.insert(i);
    cout<<s.size()<<endl;
    //delete
    s.erase(s.find(x));
    cout<<"SIZE="<<s.size()<<endl;
    //traverse
    for(set<int>::const_iterator it=s.begin(); it!=s.end(); it++)cout<<*it<<" ";
    cout<<endl;
    //search
    if(s.find(x) != s.end())cout<<x<<" FOUND"<<endl;
    else cout<<x<<" NOT FOUND"<<endl;
    getch();
    return 0;

}
