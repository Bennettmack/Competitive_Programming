#include <iostream>
#define int long long
#define foi(n) for(int i=0;i<n;i++)
using namespace std;

int32_t main() {
int  n;
cin>>n;
int a[n][n];
foi(n){
    a[i][0]=1;
    a[0][i]=1;
}
for(int i=1;i<n;i++){
    for(int j=1;j<n;j++){
        a[i][j]=a[i-1][j]+a[i][j-1];
    }
}
cout<<a[n-1][n-1];
	return 0;
}