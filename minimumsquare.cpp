#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,b,t,n,m,r;
  cin>>t;
  while(t--)
  {
    cin>>a>>b;
    n=max(a, 2*b);
    m=max(2*a, b);
    r=min(m, n);
    cout<<r*r<<endl;
    //return 0;
  }
  return 0;
}
