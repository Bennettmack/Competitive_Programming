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
   int n,m;
   cin>>n>>m;
   if(n>m)
   {
       n+=m;
       m=n-m;
       n=n-m;
    }
    int count=0;
     count+=(n*(m/5));
    for(int i=1;i<=n;i++)
    {
        int temp=i%5;
        if(m%5+temp>=5)
            count+=1;
 
       
        
    }
    cout<<count<<endl;
   
	return 0;
}