#include <iostream>
using namespace std;

int main()
{
    int n,k,a,c;
    int sum=0;
    cin>>n;
    cin>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum += arr[i];
    }
    sum = sum - arr[k];
    c=sum/2;
    cin>>a;
    if(c==a)
    cout<<"Bon Appetit"<<endl;
    else
    cout<<abs(c-a)<<endl;
    
    return 0;
    
}
