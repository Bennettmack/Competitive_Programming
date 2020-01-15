#include <iostream>
#define int long long
#define foi(n) for(int i=0;i<n;i++)
using namespace std;

int32_t main() {
string a;
cin>>a;
int lower=0,upper=0;
foi(a.size()){
    if(a[i]>='a'&&a[i]<='z')
    lower+=1;
    else
    upper+=1;
}
//cout<<lower<<" "<<upper<<endl;
if(lower>=upper){
    foi(a.size())
    {
        if(a[i]>='A'&&a[i]<='Z')
        a[i]+=32;
        cout<<a[i];
    }
}
    else{
        foi(a.size())
    {
        if(a[i]>='a'&&a[i]<='z')
        a[i]-=32;
        cout<<a[i];
    }
    }

	return 0;
}