#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    ll l,n;
    float max=0.0,temp;
    cin >> n >> l;
    ll arr[n];
    for(ll i=0;i<n;i++)
        cin >> arr[i];
    sort(arr,arr+n);
    for(ll i=1;i<n;i++){
        temp = (arr[i] - arr[i-1]);
        if(max < temp)
            max = temp;
    }
    max  = max / 2.0;
    if(arr[0] != 0){
        temp = arr[0];
        if(max < temp)
            max = temp; 
    }
    if(arr[n-1] != l){
        temp = l - arr[n-1];
        if(max < temp)
            max = temp;
    }
    printf("%.10f\n",max);
    return 0;
}