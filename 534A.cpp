#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m,i,j;
    while(cin>>n)
    {
        if (n==1)
        {
            cout<<"1"<<endl;
            cout<<"1"<<endl;
        }
        else if (n==2)
        {
            cout<<"1"<<endl;
            cout<<"1"<<endl;
        }
        else if (n==3)
        {
            cout<<"2"<<endl;
            cout<<"1"<<" "<<"3"<<endl;
        }
        else if (n==4)
        {
            cout<<"3"<<endl;
            cout<<"3"<<" "<<"1"<<" "<<"4"<<" "<<"2"<<endl;
        }
        else
        {
            cout<<n<<endl;
            for(i=1;i<=n;i+=2)
                cout<<i<<" ";
            for(i=2;i<=n;i+=2)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }
}
