#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
  {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    sort(a,a+n);
    int ans=10000;
    for(int i=0;i<n;i++)
    {
      for(int j=i+1;j<n;j++)
      {
      ans=min(a[j]-a[j-1],ans);
    }
  }
    cout<<ans<<endl;
  }
  return 0;
}
