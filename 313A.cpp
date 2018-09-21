#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[100];
    cin>>ch;

    int n,m,i,j;
    if(ch[0]=='-')
    {
        n=strlen(ch);
        m=ch[n-1]-48;
        j=ch[n-2]-48;
        if(m>=j){
            for(i=0;i<n-1;i++)
            cout<<ch[i];
        }
        else{
            if(n==3 &&ch[n-1]=='0')
            {
                cout<<"0";
            }
            else{
            for(i=0;i<n-2;i++)
            cout<<ch[i];
        cout<<ch[n-1];}
        }



    }
    else{
        cout<<ch<<endl;
    }
}
