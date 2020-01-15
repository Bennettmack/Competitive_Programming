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
    int a1,b,c,d;
    cin>>a1>>b>>c>>d;
    int n;
    cin>>n;
    int a[n+1];
    a[0]=0;
    foi(n)
    a[i+1]=0;
    for(int i=a1;i<=n;i+=a1)
    a[i]=1;
     for(int i=b;i<=n;i+=b)
    a[i]=1;
     for(int i=c;i<=n;i+=c)
    a[i]=1;
     for(int i=d;i<=n;i+=d)
    a[i]=1;
    int res=accumulate(a+1,a+n+1,0);
    cout<<res;
    
	return 0;
}