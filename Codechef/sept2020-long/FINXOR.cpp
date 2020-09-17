#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
	    int n, first, ent, x = 1, divi = 2, ans = 0, sum = 0, check;
	    cin >> n;
	    int k = 1;
	    int max = k << 20;
	    cout << 1 << " " << max << endl;
	    cin >> first;
	    fflush(stdout);
	    int s = first - (max*n);
	    int arr[20];
	    k = 1;
	    for(int i = 0; i<19; i++)
	    {
	        cout << 1 << " " << k << endl;
	        cin >> ent;
	        fflush(stdout);
	        if(k == -1)
	            break;
	            
            arr[i] = ((s + (x*n)) - ent)/divi;
	        if(arr[i]%2 != 0)
	            ans = ans + x;
	             
	        sum = sum + (x*arr[i]);
	        
	        x = divi;
	        divi = divi*2;
	        k = k << 1;
	    }
	    
	    arr[19] = (s - sum)/x;
	    if(arr[19]%2 != 0)
	        ans = ans + x;
	    
	    cout << 2 << " " << ans << endl;
	    cin >> check;
	    if(check == -1)
	    {
	        cout << "Wrong Answer";
	        break;
	    }
	    
	 
	}
	
	return 0;
}