#include<iostream>
using namespace std;
void area(double ,double);
void area(int ,int);
void area(int);
int main()
{
    int a,b,c;
    double l,h;
    cout<<"Enter the sides of triangle ";
    cin>>l>>h;
    area(l,h);
    cout<<"Enter the sides of rectangle ";
    cin>>a>>b;
    area(a,b);
    cout<<"Enter the radius of circle ";
    cin>>a;
    area(a);
}

void area(double a,double b)
{
    cout<<"area of triangle is "<<0.5*a*b<<endl;
}

void area(int a,int b)
{
    cout<<"area of rectangle is "<<a*b<<endl;
}

void area(int r)
{
    cout<<"area of circle is "<<3.14*r*r<<endl;
}