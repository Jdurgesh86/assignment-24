#include<iostream>
void highestValue(int);
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number";
    cin>>num;
    highestValue(num);
}

void highestValue(int num)
{
    int max=0;
    while(num)
    {
        int temp;
        temp=num%10;
        if(temp>max)
            max=temp;
        num/=10;
    }
    cout<<max<<" is the maximum digit in the given number";
}