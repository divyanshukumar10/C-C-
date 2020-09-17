#include<bits/stdc++.h>
using namespace std;
#define  l int
int main()
{
    int t,i,j;
    cin>>t;
 while(t--)
 {
     int n,max,d=0,m,c=0;
     cin>>n;
     int v[n+1],a[n+1];
     for(i=1;i<=n;i++)
         cin>>v[i];
      for(i=1;i<=n;i++)
     { 
         c=0,d=0;
       for(j=1;j<i;j++)
       {
           if(v[j]>v[i]) 
             c++;
       }
       for(j=i+1;j<=n;j++)
       {
           if(v[j]<v[i]) 
             d++;
       }
    a[i]=c+d+1;
     }
   sort(a+1,a+n);
   cout<<a[1]<<" "<<a[n]<<"\n";
 }
}