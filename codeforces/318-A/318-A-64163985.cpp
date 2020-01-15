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
    if(n%2==0&&k<=n/2)
    {
       cout<<k*2-1;
       return 0;
    }
    else if(n%2==0&&k>n/2)
    {
        cout<<(k-n/2)*2;
        return 0;
    }
    else if(n%2==1&&k<=(n/2+1))
    {
        cout<<k*2-1;
        return 0;
    }
    else
    {
        cout<<(k-(n/2+1))*2;
        return 0;
    }
  	return 0;
}