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
    int a,b,c;
    cin>>a>>b>>c;
    int res[16];
    res[0]=a+b+c;
    res[1]=(a+b)*c;
    res[2]=(a+b)/c;
    res[3]=a+b-c;
    res[4]=a*(b+c);
    res[5]=a*b*c;
    res[6]=(a*b)/c;
    res[7]=a*b-c;
    res[8]=a/b+c;
    res[9]=(a/b)*c;
    res[10]=a/b/c;
    res[11]=a/b-c;
    res[12]=a-b+c;
    res[13]=(a-b)*c;
    res[14]=(a-b)/c;
    res[15]=a-b-c;
    sort(res,res+16);
    cout<<res[15];
    
   
  	return 0;
}