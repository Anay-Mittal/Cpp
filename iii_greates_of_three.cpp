#include<iostream>
using namespace std;
void great(int &a,int &b, int &c, int &m)
{
    if(a>=b&&a>=c)//a>b>c
    m=a;
    else if(b>=a&&b>=c)//b>a>c
    m=b;
    else 
    m=c;
}
int main()
{
    int a,b,c,m=0;
    cout<<"enter a :"<<endl;
    cin>>a;
    cout<<"enter b :"<<endl;
    cin>>b;
    cout<<"enter c :"<<endl;
    cin>>c;
    great(a,b,c,m);
    cout<<"greatest : \n"<<m<<endl;
}