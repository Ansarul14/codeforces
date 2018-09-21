#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,ans;
    while(cin>>n){
    if(n==3)
    cout<<"1 "<<"1 "<<1<<endl;
    else{
    m=n-3;
    if(m%3!=0)
        cout<<"1 "<<"2 "<<m<<endl;
    else
        cout<<"1 "<<"4 "<<n-5<<endl;
    }
    }
}
