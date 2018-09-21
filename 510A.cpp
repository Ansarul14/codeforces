#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,c;
    cin>>n>>m;
    int chck=1;
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            for(j=1;j<=m;j++)
                printf("#");
        }
        else{
            if(chck==1)
            {
                for(j=1;j<m;j++)
                    printf(".");
                printf("#");
                chck=2;
            }
            else{
                cout<<"#";
                for(j=1;j<m;j++)
                    cout<<".";
                    chck=1;
            }
        }
        cout<<endl;
    }
}
