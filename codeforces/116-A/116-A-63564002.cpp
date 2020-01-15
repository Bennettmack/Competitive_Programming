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
    int n;
    cin>>n;
    int a[n];
    int current=0;
     foi(n){
        int b,c;
        cin>>b>>c;
        a[i]=current-b+c;
        current=a[i];
        
    }
    int res=*max_element(a,a+n);
    cout<<res;
	return 0;
}