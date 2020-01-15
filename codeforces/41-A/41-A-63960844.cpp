#include <iostream>
#include<bits/stdc++.h>
#include<vector>
#include<math.h>
#define int long long
#define foi(n) for(int i=0;i<n;i++)
#define mod 1000000007
using namespace std;
//***********************UVAISH ZAFRI*****************************

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string a,b;
    cin>>a>>b;
    int lena=a.length();
    int lenb=b.length();
    if(lena!=lenb)
    {
        cout<<"NO";
        return 0;
    }
    foi(lena)
    {
        if(a[i]!=b[lena-i-1])
        {
            cout<<"NO";
            return 0;
            
        }
    }
    cout<<"YES";
    
    
  	return 0;
}