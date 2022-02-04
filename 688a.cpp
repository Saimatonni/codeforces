#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,m,a[100],b[100],sum=0;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    for(int j=0;j<m;j++)
    {
      cin>>b[j];
    }
    for(int i=0;i<n;i++)
    {
    for(int j=0;j<m;j++)
    {
      if(a[i]==b[j])
      {
      sum++;
    }
    }
  }
    cout<<sum<<endl;
  }
  return 0;
}
