#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
     cin>>t;
     while(t--)
     {
         int n,t=0,i,j,c=0;
         cin>>n;
         int freq[11]={0};
         int a[n],k[n],d[10001]={0};
         for(i=0;i<n;i++)
         {
             cin>>a[i];
             freq[a[i]]++;
         }
          for(i=1;i<=10;i++)
          {
            if(freq[i]!=0)
              d[freq[i]]++;
          }
        int max=-1,p;
       for(i=1;i<=10000;i++)
          {
             if(d[i]>max)
                {
                    p=i;
                    max=d[i];
                }
          } 
         cout<<p<<endl;
     }
}