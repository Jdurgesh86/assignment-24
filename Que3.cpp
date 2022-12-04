#include<iostream>
using namespace std;
int Power(int,int);
int main()
{
    int p;
    int x,y;
    cout<<"Enter digit and its power you want to calculate ";
    cin>>x>>y;
    p=Power(x,y);
    cout<<p<<" is "<<x<<" power of "<<y;
}

int Power(int x,int y)
{
    int p=1;
    while(y)
    {
        p=p*x;
        y--;
    }
    return p;
}