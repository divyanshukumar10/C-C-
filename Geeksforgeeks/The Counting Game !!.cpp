#include <iostream>
using namespace std;

int main() {
	int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int count =1;
        
        for(int i = 0; i < str.length(); i++)
        {
        if(str[i] >= 'A' && str[i] <= 'Z')
        count++;
        }
        cout<<count<<endl;
    }
	return 0;
}