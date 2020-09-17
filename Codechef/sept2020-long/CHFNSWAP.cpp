#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define w(t) int t;cin>>t;while(t--)


long long int  root(long long int x)
{
   long double ans=sqrt(1.0+4.0*x);
   ans=ans-1;
   ans=ans/2;
   long long int sub=ans;


   return sub;
}

int main(){

w(t)
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
    long long int n;
    cin>>n;
    long long int sum=n*(n+1)/2;
    if(sum&1 == 1)
    {
    cout<<"0"<<endl;
    continue;
    }
    long long int m=root(sum);
    long long int first=m*(m+1)/2;
    if(first==(sum/2))
     {
         long long int ans=(m*(m-1)/2 + ((n-m)*(n-m-1)/2)+ n-m);
         cout<<ans<<endl;
     }
     else
     {
         cout<<n-m<<endl;
     }
}


}