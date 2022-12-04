#include<iostream>
using namespace std;
void IsPrime(int);
int main()
{
    int num;
    cout<<"Enter a number to check prime or not ";
    cin>>num;
    IsPrime(num);
}
void IsPrime(int num)
{
    int i;
    for(i=2;i<num;i++)
       if(num%i==0)
            break;
    if(i==num)
        cout<<num<<" is a prime number";
    else
        cout<<num<<" is not a prime number";
}