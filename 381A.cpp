#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,m,j,arr[1005];
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>arr[i];
    int first=1,last=n;
    int f1=0,f2=0;
    for(i=1;i<=n;i++)
        {
            if(i%2!=0)
            {
               if(arr[last]>arr[first])
               {
                   f1=f1+arr[last];
                   last=last-1;
               }
               else{
                f1=f1+arr[first];
                first=first+1;
               }
            }
            else{
                if(arr[last]>arr[first])
               {
                   f2=f2+arr[last];
                   last=last-1;
               }
               else{
                f2=f2+arr[first];
                first=first+1;
               }
            }
        }
        cout<<f1<<" "<<f2<<endl;
}
