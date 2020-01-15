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
    double a,b;
    double res=DBL_MAX;
    cin>>a>>b;
    int n;
    cin>>n;
    while(n--){
        double x,y,z;
        cin>>x>>y>>z;
        double temp=abs(x-a);
        double temp2=abs(y-b);
        double tempres=(pow(temp*temp+temp2*temp2,0.5))/z;
        if(tempres<res)
        res=tempres;
    }
    cout<<setprecision(20)<<fixed<<res;
	return 0;
}