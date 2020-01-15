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
    int posmax=0;
    int posmin=0;
    int max=*max_element(a,a+n);
    int min=*min_element(a,a+n);
   // cout<<max<<" "<<min;
  for(int i=0;i<n;i++)
{
    if(a[i]==max)
    {
        posmax=i;
        break;
    }
}
for(int j=n-1;j>=0;j--)
{
    if(a[j]==min)
    {
        posmin=j;
        break;
    }
}

int res=posmax+(n-1-posmin);
if(posmax>posmin)
res-=1;
cout<<res;

  	return 0;
}