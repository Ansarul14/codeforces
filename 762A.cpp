#include<bits/stdc++.h>
using namespace std;
vector<long long>v;
#define ll long long
#define N 1000000000000000
main()
{
    long long n,k,i,j,c;



    while(cin>>n>>k)
    {

         for(i=1;i<=sqrt(n);i++)
    {
        if (n%i==0){
            v.push_back(i);
        if (n/i!=i)
            v.push_back(n/i);
        }
      }
      //v.push_back(n);
      sort(v.begin(),v.end());


        if (v.size()>=k)
        cout<<v[k-1]<<endl;
        else
            cout<<"-1"<<endl;

        v.clear();

    }
}

