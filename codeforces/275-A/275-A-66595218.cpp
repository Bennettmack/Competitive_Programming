#include<bits/stdc++.h>
#define int long long
#define foi(n) for(int i=0;i<n;i++)
#define foj(n) for(int j=0;j<n;j++)
#define endl "\n"
#define fast(); ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define fixed(); cout << fixed << setprecision(20);
using namespace std;

//for declaring most used global variables and constants
const int mod=1e9+7;

//For Calculating nCr
template<typename T>
T nCr(T n, T r) {
    if(r > n - r) r = n - r; // because C(n, r) == C(n, n - r)
    int  ans = 1,i;
    for(i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
    } return ans;
}

//power optimized
template<typename T,typename T2>
T2 power(T x, T y) 
{ 
    if (y == 0)  return 1; 
    T2 res=power(x,y/2);
    if (y % 2)  return res*res*x;
    return res*res; 
}

//return number of set bits in a given number
template<typename T>
int countSetBits(T n) 
{ 
    int count = 0; 
    while (n) { 
        count += n & 1; 
        n >>= 1; 
    } return count; 
}

//return true if number is prime
template<typename T>
bool isPrime(T n) 
{ 
    // Corner cases 
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 
    if (n % 2 == 0 || n % 3 == 0)  return false; 
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

//adds two string which contains integer values.Used for Adding large Numbers
string AddString(string first,string second)
{
     // Before proceeding further, make sure length 
    // of second is larger. 
    if (first.length() > second.length())  swap(first, second); 
    
    // Take an empty string for storing result 
    string result = ""; 
    
    int n1 = first.length(), n2 = second.length(); 
 
    reverse(first.begin(), first.end()); 
    reverse(second.begin(), second.end()); 
  
    int carry = 0; 
    for (int i=0; i<n1; i++) { 
        int sum = ((first[i]-'0')+(second[i]-'0')+carry); 
        result.push_back(sum%10 + '0'); 
        carry = sum/10; 
    } 
  
    // Add remaining digits of larger number 
    for (int i=n1; i<n2; i++)  { 
        int sum = ((second[i]-'0')+carry); 
        result.push_back(sum%10 + '0'); 
        carry = sum/10; 
    } 
  
    // Add remaining carry 
    if (carry)  result.push_back(carry+'0'); 
  
    // reverse resultant string 
    reverse(result.begin(), result.end()); 
  
    return result; 
}
   
// Multiplies str1 and str2, and prints result. 
string MultiplyString(string num1, string num2) 
{ 
    int len1 = num1.size(); 
    int len2 = num2.size(); 
    if (len1 == 0 || len2 == 0) 
    return "0"; 
  
    // will keep the result number in vector 
    // in reverse order 
    vector<int> result(len1 + len2, 0); 
  
    // Below two indexes are used to find positions 
    // in result.  
    int i_n1 = 0;  
    int i_n2 = 0;  
      
    // Go from right to left in num1 
    for (int i=len1-1; i>=0; i--) 
    { 
        int carry = 0; 
        int n1 = num1[i] - '0'; 
  
        // To shift position to left after every 
        // multiplication of a digit in num2 
        i_n2 = 0;  
          
        // Go from right to left in num2              
        for (int j=len2-1; j>=0; j--) 
        { 
            // Take current digit of second number 
            int n2 = num2[j] - '0'; 
  
            // Multiply with current digit of first number 
            // and add result to previously stored result 
            // at current position.  
            int sum = n1*n2 + result[i_n1 + i_n2] + carry; 
  
            // Carry for next iteration 
            carry = sum/10; 
  
            // Store result 
            result[i_n1 + i_n2] = sum % 10; 
  
            i_n2++; 
        } 
  
        // store carry in next cell 
        if (carry > 0) 
            result[i_n1 + i_n2] += carry; 
  
        // To shift position to left after every 
        // multiplication of a digit in num1. 
        i_n1++; 
    } 
  
    // ignore '0's from the right 
    int i = result.size() - 1; 
    while (i>=0 && result[i] == 0) 
    i--; 
  
    // If all were '0's - means either both or 
    // one of num1 or num2 were '0' 
    if (i == -1) 
    return "0"; 
  
    // generate the result string 
    string s = ""; 
      
    while (i >= 0) 
        s += to_string(result[i--]); 
  
    return s; 
}  

//for string with space use std::getline(cin,string_name);
//***********************UVAISH ZAFRI*****************************
int32_t main() {
    fast(); fixed();
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
  int a[5][5];
  int t;
  foi(5)
  foj(5)
  a[i][j]=1;
  for(int i=1;i<4;i++)
  for(int j=1;j<4;j++)
  {
    cin>>t;
    if(t%=2){
        a[i][j]+=1;
        a[i-1][j]+=1;
        a[i+1][j]+=1;
        a[i][j+1]+=1;
        a[i][j-1]+=1;
         a[i][j]%=2;
        a[i-1][j]%=2;
        a[i+1][j]%=2;
        a[i][j+1]%=2;
        a[i][j-1]%=2;
        
    }
    
  }
  for(int i=1;i<4;i++){
  for(int j=1;j<4;j++){
  cout<<a[i][j];}
  cout<<endl;
  }
   
  	return 0;
}