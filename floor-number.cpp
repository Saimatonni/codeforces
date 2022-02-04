#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  int n,x;
  while(t--)
  {
    cin>>n>>x;
    if(n<=2)
    {
      cout<<1<<endl;
    }
    else
    {
      int d=n-2;
      int s=d/x;
      if(d%x==0)
      {
        cout<<s+1<<endl;
      }
      else
      {
    s=s+1;
      cout<<s+1<<endl;
    }
    }
  }
  return 0;
}
