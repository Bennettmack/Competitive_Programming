#include <iostream>
#include<bits/stdc++.h>
#include<vector>
#include<math.h>
#define int long long
#define foi(n) for(int i=0;i<n;i++)
#define mod 1000000007
using namespace std;
//***********************UVAISH ZAFRI*****************************

  
   /* // Print all prime numbers 
    for (int p=2; p<=n; p++) 
       if (prime[p]) 
          cout << p << " "; */


main() {
    bool prime[1000001];

    
  fill(prime,prime+1000001,true);
  
    for (int p=2; p*p<=1000001; p++) 
    { 
        // If prime[p] is not changed, then it is a prime 
        if (prime[p] == true) 
        { 
            // Update all multiples of p greater than or  
            // equal to the square of it 
            // numbers which are multiple of p and are 
            // less than p^2 are already been marked.  
            for (int i=p*p; i<=1000000; i += p) 
                prime[i] = false; 
        } 
    } 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   int n;
   cin>>n;
   for(int i=3;i<n-3;i++)
   {
       if(!prime[i]&&!prime[n-i])
       {
           cout<<i<<" "<<n-i;
           return 0;
       }
   }
  	return 0;
}