#include <iostream>
#include<bits/stdc++.h>
#include<vector>
#include<math.h>
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
    string str=to_string(n);
   int len=str.length();
   if(n>=0){
       cout<<n;
       return 0;
   }
  
   else{
       if(str[len-1]>str[len-2]){
       cout<<n/10;
       //cout<<"her";
       }
       else
       {
           
           if(str[0]=='-'&&str[2]=='0'&&len==3)
           {cout<<"0";return 0;}
           
           foi(str.length()-2)
           {
             
               cout<<str[i];
           }
           cout<<str[str.length()-1];
       }
   }
  	return 0;
}