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
   int n,k;
   cin>>k>>n;
   int a[n];
   foi(n)
   cin>>a[i];
   sort(a,a+n);
   int min=1000000007;
   for(int i=0;i<n-(k)+1;i++)
   if(a[i+k-1]-a[i]<min)
   min=a[i+k-1]-a[i];
   cout<<min;
   return 0;
}