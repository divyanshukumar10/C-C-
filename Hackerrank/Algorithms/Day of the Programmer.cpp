#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(1700<=n && n<=1917)
    {
        if(n%4==0)
        cout<<"12.09."<<n<<endl;
        else
        cout<<"13.09."<<n<<endl;
    }
    if(n==1918)
    cout<<"26.09."<<n<<endl;
    if(n>=1919)
    {
        if(n%400==0 || (n%4==0 && n%100!=0))
        cout<<"12.09."<<n<<endl;
        else
        cout<<"13.09."<<n<<endl;
    }
    return 0;
}
