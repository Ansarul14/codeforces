#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s1[30],s2[30],s3[1005],ch;
    int n,m,i,j,p,q,t,flag;
    //getchar();
    while(gets(s1))
    {
        gets(s2);gets(s3);
        n=strlen(s3);
        for(i=0;i<n;i++)
        {
            if ((s3[i]>='A'&&s3[i]<='Z')||(s3[i]>='a'&&s3[i]<='z'))
            {
                if (s3[i]>='A'&&s3[i]<='Z')
                {
                    ch=s3[i]+32;
                    flag=0;
                }
                else {
                    flag=1;
                    ch=s3[i];
                }
               for(j=0;j<26;j++)
               {
                   if (s1[j]==ch){
                    m=j;break;}
               }
               if (flag==0){
                ch=s2[j]-32;
                cout<<ch;}
               else
                cout<<s2[j];


            }
            else cout<<s3[i];
        }
        cout<<endl;
    }
}
