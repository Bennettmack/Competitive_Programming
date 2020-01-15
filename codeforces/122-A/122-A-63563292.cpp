#include <iostream>
#include<bits/stdc++.h>
#include<vector>
#include<math.h>
#define int long long
#define foi(n) for(int i=0;i<n;i++)
using namespace std;
//***********************UVAISH ZAFRI*****************************
int temp[]={4,7,47,44,77,74,447,444,474,744,747,777,774,477};
main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int t=14;
    foi(t){
        if(n%temp[i]==0)
        {cout<<"YES";
        return 0;
        }
    }
    cout<<"NO";
	return 0;
}