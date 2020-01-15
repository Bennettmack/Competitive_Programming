#include<bits/stdc++.h>
#define int long long
#define foi(n) for(int i=0;i<n;i++)
#define foj(n) for(int j=0;j<n;j++)
#define mod 1000000007
#define endl "\n"
#define fast(); ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define fixed(); cout << fixed << setprecision(20);
using namespace std;

//For Calculating nCr
template<typename T>
T nCr(T n, T r) {
    if(r > n - r) r = n - r; // because C(n, r) == C(n, n - r)
    int  ans = 1;
    int i;

    for(i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
    }

    return ans;
}

//power optimized
template<typename T,typename T2>
T power(T x, T2 y) 
{ 
    if (y == 0) 
        return 1; 
    else if (y % 2 == 0) 
        return power(x, y / 2) * power(x, y / 2); 
    else
        return x * power(x, y / 2) * power(x, y / 2); 
};

//return number of set bits in a given number
template<typename T>
int countSetBits(T n) 
{ 
    int count = 0; 
    while (n) { 
        count += n & 1; 
        n >>= 1; 
    } 
    return count; 
}

//return true if number is prime
template<typename T>
bool isPrime(T n) 
{ 
    // Corner cases 
    if (n <= 1) 
        return false; 
    if (n <= 3) 
        return true; 
  
    // This is checked so that we can skip 
    // middle five numbers in below loop 
    if (n % 2 == 0 || n % 3 == 0) 
        return false; 
  
    for (int i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false; 
  
    return true; 
} 

//return true if string is palindrome
bool ispalindrome(string s)
{
    int len=s.length();
    foi(len){
        if(s[i]!=s[len-i-1])
        return false;
    }
    return true;
}
    
//for string with space use std::getline(cin,string_name);
//***********************UVAISH ZAFRI*****************************
int32_t main() {
    fast(); fixed();
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  if(a==b||b>a)
  cout<<"Second";
  else
  cout<<"First";
   
  	return 0;
}