#include <iostream>
#include<bits/stdc++.h>
#include<vector>
#include<math.h>
#define int long long
#define foi(n) for(int i=0;i<n;i++)
#define mod 1000000007
using namespace std;
//***********************UVAISH ZAFRI*****************************

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    int a[n];
    
    foi(n)
    cin>>a[i];
    int b[n];
    fill(b,b+n,0);
    foi(n)
    {
        if(i>0&&b[i-1]>1)
        b[i]=b[i-1]-1;
        else
        {
            int count=1;
            for(int j=i+1;j<n;j++)
            {
                if(a[j]>=a[j-1])
                count++;
                else
                break;
            }
            b[i]=count;
        }
        
    }
    cout<<*max_element(b,b+n);
    
  	return 0;
}