#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100];
    int n,m,i,j,p,q,sum;
    while(cin>>s)
    {
        n=strlen(s);
        if (n==1)
        {
            p=s[0]-48;
            cout<<"1"<<endl;
        }
        else
        {
            p=s[0]-48;
            p=p+1;
            q=0;
            sum=p;
            for(i=1;i<n;i++)
            {
                sum=sum*10;
            }

            q=0;
            for(i=0;i<n;i++)
            {
                q=q*10+s[i]-48;
            }

            cout<<abs(sum-q)<<endl;

        }
    }
}
