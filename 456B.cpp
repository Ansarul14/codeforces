#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n,m,i,j,p,sum;
    while(cin>>s)
    {
        if (s=="0")
            cout<<"4"<<endl;


        else{
                n=s.size();
                if (n>1){
        m=s[n-1]-48;
        p=s[n-2]-48;
        sum=0;
        sum=sum*10+p;
        sum=sum*10+m;
        if (sum%4==0)
            cout<<"4"<<endl;
        else
            cout<<"0"<<endl;}

        else
        {
            if (s=="4"||s=="8")cout<<"4"<<endl;
            else cout<<"0"<<endl;
        }
        }
    }
}

