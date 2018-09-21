#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,i,j,p;
    while(cin>>n>>m)
    {
        if(n%2==0)
            i=n/2;
        else
            i=n/2+1;
        if(m<=i)
        {
            cout<<m+m-1<<endl;
        }
        else
        {
            p=(m-i)*2;
            cout<<p<<endl;
        }
    }
}
