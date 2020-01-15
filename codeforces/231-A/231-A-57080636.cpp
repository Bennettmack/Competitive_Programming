#include<iostream>
using namespace std;
int main()
{
   int n,cb=0;
   cin>>n;
   while(n--)
   {
       int a,b,c,count=0;
       cin>>a>>b>>c;
       if(a==1)
       count+=1;
       if(b==1)
       count+=1;
       if(c==1)
       count+=1;
       
       if(count>=2)
       {
           cb+=1;
       }
       
   }
   cout<<cb;
   return 0;
}