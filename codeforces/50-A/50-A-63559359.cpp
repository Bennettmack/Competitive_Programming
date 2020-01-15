#include <iostream>
#include<bits/stdc++.h>
#include<vector>
#include<math.h>
#define int long long
#define foi(n) for(int i=0;i<n;i++)
using namespace std;
//***********************UVAISH ZAFRI*****************************

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   float n,m;
   cin>>n>>m;
   int res=0;
   if((int)n%2==0)
   res=(n/2)*m;
   else if((int)m%2==0)
   res=(m/2)*n;
   else
   {
       if(n==1&&m==1)
       res=0;
       else{
           //atleast one of them is 3 or above and both are odd
           int min=n>m?m:n;
           int max=n>m?n:m;
           res=(max/2)*min+min/2;
       }
   }
   cout<<res;
	return 0;
}