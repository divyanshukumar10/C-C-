#include <bits/stdc++.h>
using namespace std;

int fun1(int n,int l,int r){
    return ((l-1)*n+r);}

int main(){
 ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
   while(t--)
   {
       int n;
       cin>>n;
       int a[n+1][n+1]={0};
       for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
          cin>>a[i][j];

       vector<int>v;
             int i=1,j=1;
            while(j<n && i<n){
            if(a[i][j+1] == fun1(n,i,j+1) && (a[i+1][j]==fun1(n,i+1,j)))
                      v.push_back(0);
              else
                v.push_back(1);
                i++;
                j++;
        }
  int z=0;
  for(int i=0;i<v.size()-1;i++)
  {
      if(v[i]!=v[i+1])
        z++;
  }
   if(v[v.size()-1]==1)
    z++;
   cout<<z<<endl;
  }
}