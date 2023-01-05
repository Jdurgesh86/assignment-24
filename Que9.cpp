#include<iostream>
using namespace std;
void maxmin(int,int);
void maxmin(float,float);
int main()
{
    int a,b;
    cout<<"enter two numbers "<<endl;
    cin>>a>>b;
    maxmin(a,b);
    float x,y;
    cout<<"enter two numbers ";
    cin>>x>>y;
    maxmin(x,y);
}
void maxmin(int a,int b)
{
    if(a>b)
        cout<<a<<" is greater than "<<b;
    else
        cout<<b<<" is greater than "<<a;
}

void maxmin(float a,float b)
{
    if(a>b)
        cout<<a<<" is greater than "<<b;
    else
        cout<<b<<" is greater than "<<a;
}