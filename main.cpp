#include <iostream>

using namespace std;
int gcd(int a,int b)
{
    if(a==0)
        return b;
    return gcd(b%a,a);
}
int phi(int n)
{

    int count=1;
    for(int i=2; i<=n; i++)
    {
        if(gcd(i,n)==1)
            count++;

    }
    return count;
}
int main()
{
    for(int i=1; i<20; i++)
        cout<< i<<")  "<<phi(i)<<endl;
    return 0;
}
