#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,b,m=0;
  cin>>a>>b;
  int x[a];
  for(int i=0;i<a;i++)
  {
    cin>>x[i];
  }
  sort(x,x+a);
  for(int i=0;i<a-1;i++)
  {
    if((x[i+1]-x[i])>m)
    {
      m=x[i+1]-x[i];
    }
  }
  double y=x[0];
  double z=(double)m/2;
  double ans=max(y,z);
  double n=b-x[a-1];
  ans=max(n,ans);
  cout<<fixed<<setprecision(10)<<ans<<endl;
  return 0;
}
