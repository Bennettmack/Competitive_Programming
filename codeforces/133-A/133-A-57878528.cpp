//By Uvaish_Zafri, contest: Codeforces Beta Round #96 (Div. 2), problem: (A) HQ9+, Compilation error, #
 #include<iostream>
#include<string.h>
 
using namespace std;
int main()
{
    string s;
    cin>>s;
    int len=s.length();
    for(int i=0;i<len;i++)
    {
        if(s[i]=='H'||s[i]=='9'||s[i]=='Q')
        {cout<<"YES"<<endl; return 0;}
       
    }
    cout<<"NO"<<endl;
    return 0;
}