#include<iostream>
using namespace std;

double e(int x,int n)
{
    static double p=1,f=1;
    double r;
    if(n==0)
    {
        return 1;
    }
    r=e(x,x-1);
    p=p*x;
    f=f*n;
    return r+p/f;
}
int main()
{
    cout<<e(1,10)<<endl;//only work for 1 
    return 0;
}