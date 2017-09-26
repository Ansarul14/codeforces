#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,p,flag;
    char ch;
    while(cin>>n>>m)
    {
        map<char,int>mp;
        for(i=0;i<n;i++)
        {
            cin>>ch;
            mp[ch]++;
        }
        map<char,int>::iterator it;
        flag=0;
        for(it=mp.begin();it!=mp.end();it++)
        {
            if (it->second<=m)
            {
                flag=1;
            }
            else
            {
                flag=0;break;
            }
        }
        if (flag==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
