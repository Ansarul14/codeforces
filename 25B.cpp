#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j;
    string s;
    while(cin>>n)
    {
        cin>>s;
        m=s.size();
        if (m==2)
            cout<<s<<endl;
        else if (m==3)
            cout<<s<<endl;
        else if (m==4)
            cout<<s[0]<<s[1]<<"-"<<s[2]<<s[3]<<endl;
        else if (m==5)
            cout<<s[0]<<s[1]<<"-"<<s[2]<<s[3]<<s[4]<<endl;
        else
        {
            if (m%2==0)
            {
                for(i=0;i<m;i+=2)
                {
                    cout<<s[i]<<s[i+1];
                    if (i<m-2)cout<<"-";
                }
                cout<<endl;
            }
            else {
                cout<<s[0]<<s[1]<<"-";
                cout<<s[2]<<s[3]<<s[4]<<"-";
                for(i=5;i<m;i+=2)
                {
                    cout<<s[i]<<s[i+1];
                    if (i<m-2)cout<<"-";
                }
                cout<<endl;
            }
        }
    }
}
