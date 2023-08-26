#include<iostream>
using namespace std;
void fac(int &a,int &fact)
{
    for(int i=1;i<=a;i++)
    fact=fact*i;
}
int main()
{
    int a;
    int fact=1;
    cout<<"enter a:"<<endl;
    cin>>a;
    fac(a,fact);
    cout<<"factorial of "<<a<<" is "<< fact <<endl; 
}