// print pascal triangle
#include<iostream>
using namespace std;
int main()
{
    int n;
    printf("Enter the number by which you have to print pascal triangle: ");
    scanf("%d",&n);
    for(int i = 1; i <= n; i++)
    {
        int C=1;
        for(int j = 1; j <= i; j++)
        {
            printf("%d ",C);
            C = C * (i - j) / j;
        }
        printf("\n");
    }
}