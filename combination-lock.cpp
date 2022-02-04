#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,ans=0;
  cin>>n;
  string a,b;
  cin>>a>>b;
  for(int i=0;i<n;i++)
  {
    ans+=min((10-abs(a[i]-b[i])),abs(a[i]-b[i]));
  }
  cout<<ans<<endl;
  return 0;
}
