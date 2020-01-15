#include<bits/stdc++.h>
#define int long long
#define foi(n) for(int i=0;i<n;i++)
#define foj(n) for(int j=0;j<n;j++)
#define mod 1000000007
#define endl "\n"
using namespace std;
//for string with space use std::getline(cin,string_name);
//***********************UVAISH ZAFRI*****************************

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    int a[n];
    foi(n){
    cin>>a[i];
    a[i]-=1;
    }
    for(int i=1;i<=n;i++){
       int count=accumulate(a,a+i,0);
      //  cout<<count<<" ";
        if(count%2==0)
        cout<<"2"<<endl;
        else
        cout<<"1"<<endl;
    }
  	return 0;
}