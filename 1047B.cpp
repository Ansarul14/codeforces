#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,x,y,sum;
    cin>>n;
    sum=-1;
    for(int i=1;i<=n;i++)
    {
        cin>>x>>y;
        if(x+y>sum)
            sum=x+y;
    }
    cout<<sum<<endl;
}
