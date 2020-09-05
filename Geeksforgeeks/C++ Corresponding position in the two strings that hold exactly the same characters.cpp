#include <iostream>
#include <algorithm>
using namespace std; 

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int c=0;
    string s1,s2;
    cin>>s1>>s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    
    for(int i = 0; i <s1.length(); i++)
    {
        if(s1[i] == s2[i])
        c++;
    }
    
    cout<<c<<endl;
    }
    
    return 0;
}