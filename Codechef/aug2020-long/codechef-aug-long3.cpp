#include <iostream>
using namespace std;

int main() {
 int a;
 cin>>a;
 while(a--)
 {
      long c,r;
     cin>>c>>r;
     int m,n;
     if(c%9==0)
      m=c/9;
      else
      m=c/9+1;
      if(r%9==0)
       n=r/9;
       else
       n=r/9+1;
     if(n<=m)
      cout<<"1"<<" "<<n<<"\n";
      else
      cout<<"0"<<" "<<m<<"\n";
 }
}