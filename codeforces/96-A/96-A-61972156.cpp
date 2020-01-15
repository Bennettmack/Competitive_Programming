#include<iostream>


#include<vector> 
#define int long long
using namespace std;
 main()
{
  string s;
  cin>>s;
  int count=1,max=0;
  //cout<<s.length();
  for(int i=1;i<s.length();i++)
  {
     if(s[i]==s[i-1])
     count+=1;
     if(s[i]!=s[i-1])
     {
         if(count>max)
         {max=count;
         	//cout<<"max:"<<max;
         }
         count=1;
     }
   //  cout<<count<<endl;
  }if(count>max)
  max=count;
 // cout<<count;
  //cout<<"max:"<<max;
  //cout<<max;
  if(max>=7)
  cout<<"YES";
  else
   cout<<"NO";
  
}