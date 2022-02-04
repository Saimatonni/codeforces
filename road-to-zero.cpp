#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  long long x,y,a,b;
  cin>>t;
  while(t--)
  {
    cin>>x>>y;
    cin>>a>>b;

      if(x>y)
      {
        swap(x,y);
      }
      long long m=0,n=0,d;
      m=x*a+y*a;
      d=y-x;
      n=d*a+x*b;
      cout<<min(m,n)<<endl;

  }
  return 0;
}
