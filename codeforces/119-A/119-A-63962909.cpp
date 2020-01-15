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
    int a,b,n;
    cin>>a>>b>>n;
    int temp=0;
    while(1)
    {
        
        int temp2;
        if(temp%2==0)
        {//simon//0
         temp2=__gcd(a,n);
        if(n>=temp2)
        n-=temp2;
        else{
        cout<<"1";
        return 0;
        }
        
            
        }
        else
        {
            //antisimon//1
            temp2=__gcd(b,n);
        if(n>=temp2)
        n-=temp2;
        else{
        cout<<"0";
        return 0;
        }
        }
       // cout<<n<<" "<<temp<<endl;
        temp+=1;
    }
  	return 0;
}