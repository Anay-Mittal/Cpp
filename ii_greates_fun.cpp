#include<iostream>
using namespace std;
void great(int &a,int&b,int&m)
{
    if(a>=b)
        m=a;
    else
    m=b;
}
int main()
{
    int a,b;
    int m=0;
    cout<<"enter a"<<endl;
    cin>>a;
    cout<<"enter b"<<endl;
    cin>>b;
    great(a,b,m);
    cout<<"greates = "<<m<<endl;
}