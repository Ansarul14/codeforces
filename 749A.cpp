
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,p,q;
    while(cin>>n)
    {
        if (n%2==0)
        {
            cout<<n/2<<endl;
            for(i=2;i<=n;i+=2){
                cout<<"2";
                if (i<n)
                    cout<<" ";}
                    cout<<endl;
        }
        else
        {
            m=n-3;
            cout<<n/2<<endl;
            for(i=2;i<=m;i+=2)
                cout<<"2"<<" ";
            cout<<"3"<<endl;
        }
    }
}
