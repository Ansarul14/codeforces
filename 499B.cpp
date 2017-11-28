#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,p,q;
    string s1[8000],s2[4000];
    while(cin>>n>>m)
    {
        for(i=1;i<=2*m;i++)
           cin>>s1[i];
        for(i=1;i<=n;i++)
           cin>>s2[i];

        for(i=1;i<=n;i++)
        {
            for(j=1;j<=2*m;j+=2)
            {
                if (s2[i]==s1[j])
                {
                    p=s1[j].size();
                    q=s1[j+1].size();
                    if (p<q)
                        cout<<s1[j];
                    else if (p==q)
                        cout<<s1[j];
                    else
                        cout<<s1[j+1];
                        break;
                }
            }
            cout<<" ";
        }
        cout<<endl;

    }
}
