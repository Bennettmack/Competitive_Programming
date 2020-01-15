#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    int n,m,c=0,j=0;
    cin>>n>>m;
  while(++j)
  {
        if(j%2!=0)
        {
        for(int j=0;j<m;j++)
        {
            cout<<"#";
        }
        c++;
        if(c==n) break;
         cout<<endl;
         for(int k=0;k<m-1;k++)
         {
             cout<<".";
         }
         cout<<"#"<<endl;
         c++;
         if(c==n) break;
        }
        else{
                for(int j=0;j<m;j++)
                {
                 cout<<"#";
                  }
                  c++;
         if(c==n) break;
                   cout<<endl<<"#";
         for(int k=0;k<m-1;k++)
         {
             cout<<".";
         }
         c++;
         if(c==n) break;
         cout<<endl;

    }
  }
}