//program to find Gretest Integer Function 
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"give your number\n";
    cin>>a;
    if(a>0)
    {b=a;}
    else 
    if(a==0)
    {b=a=0;}
    else{b=a-1;}
    cout<<"your GIF is\n";
    cout<<b;
    return 0;
    }
