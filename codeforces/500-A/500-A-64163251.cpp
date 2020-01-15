#include <iostream>
#include<bits/stdc++.h>
#include<vector>
#include<math.h>
#define int long long
#define foi(n) for(int i=0;i<n;i++)
#define foj(n) for(int j=0;j<n;j++)
#define mod 1000000007
#define endl "\n"
using namespace std;
//***********************UVAISH ZAFRI*****************************

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,k;
    cin>>n>>k;
    n-=1;
    int a[n];
    foi(n)
    cin>>a[i];
    int curr=1;
    foi(n)
    {
        curr+=a[i];
        i+=(a[i]-1);
        if(curr==k)
        {
            cout<<"YES";
            return 0;
            
        }
        if(curr>k)
        {
            cout<<"NO";
            return 0;
        }
        
    }
    cout<<"NO";
    return 0;
  	return 0;
}