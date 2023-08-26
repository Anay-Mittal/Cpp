//a,b ,a+b
#include<iostream>
using namespace std;
void fib(int &num, int &a, int &b, int &c, int &i)
{
    for(;i<=num;)
    a=i;
    b=i++;
    c=a+b;
}
int main()
{
    int num,a,b,c,i=0;
    cout<<"enter a number : ";
    cin>>num;
    fib(num,a,b,c,i);
    cout<<""<<a,b,c;
}