#include<bits/stdc++.h>
using namespace std;
int main()
{
  int i,a[100],x[100],n;
  cin>>n;
  for(i=0;i<n;i++)
  {
    cin>>x[i];
  }
  for(i=0;i<n;i++)
  {
    a[x[i]]=i+1;
  }
  for(i=1;i<=n;i++)
  {
    cout<<a[i]<<" "<<endl;
  }
  return 0;
}
