#include<iostream>
using namespace std;

int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
        return fact(n-1)*n;
}
int c(int n,int r)
{
    if(r==0 || n==r)
        return 1;
    else
        return c(n-1,r-1)+c(n-1,r);
}
int main()
{
    cout<<c(4,2)<<endl;
}