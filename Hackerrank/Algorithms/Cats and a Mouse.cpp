#include <iostream>
using namespace std;

int main()
{
    int q,x,y,z;
    cin>>q;
    
    for(int i;i<q;i++)
    {
        cin>>x>>y>>z;
        
        if(abs(x-z)>abs(y-z))
        cout<<"Cat B"<<endl;
        if(abs(x-z)<abs(y-z))
        cout<<"Cat A"<<endl;
        if(abs(x-z)==abs(y-z))
        cout<<"Mouse C"<<endl;
    }
    
    return 0;
}