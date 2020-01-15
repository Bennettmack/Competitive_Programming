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
   string a,b;
   cin>>a>>b;
   int len=a.length();
   for(int i=0;i<len;i++){
       if(a[i]>='A'&&a[i]<='Z')
       a[i]+=32;
       if(b[i]>='A'&&b[i]<='Z')
       b[i]+=32; 
     
       if(a[i]>b[i])
       {
           cout<<"1";
           return 0;
       }
       if(a[i]<b[i]){
           cout<<"-1";
           return 0;
       }
   }
    
           cout<<"0";
  
	return 0;
}