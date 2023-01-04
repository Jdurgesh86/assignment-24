#include<iostream>
using namespace std;
int add(int ,int ,int =0);
int main()
{
    int a,b,c;
    cout<<"Enter two number ";
    cin>>a>>b;
    cout<<"The addition of two numbers is "<<add(a,b)<<endl;
    cout<<"Enter three numbers ";
    cin>>a>>b>>c;
    cout<<"The addition of three numbers is "<<add(a,b,c)<<endl;
}

add(int a,int b,int c)
{
    return a+b+c;
}