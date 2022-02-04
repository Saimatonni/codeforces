#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,b,c,d,x,y,z,t;
  cin>>t;
  while(t--)
  {
   cin>>a>>b>>c>>d;
   if(b==c)
   {
     x=b;
     y=b;
     z=c;
   }
   else if(c==d)
   {
     x=b;
     y=c;
     z=c;
   }
   else
   {
     x=b;
     y=c;
     z=c;
   }
   cout<<x<<" "<<y<<" "<<z<<endl;
 }
 //cout<<endl;
 return 0;
}
