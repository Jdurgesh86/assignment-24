#include<iostream>
using namespace std;
void sum(int,int,int=0);
int main()
{
    sum(10,20);
    sum(10,20,30);
}

void sum(int a,int b,int c)
{
    cout<<"The sum is "<<a+b+c<<endl;
}