#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin>>s;
  int n,a[10000];
  cin>>n;
  a[1]=0;
  for(int i=1;i<s.size();i++)
  {
    if(s[i]==s[i-1])
    {
      a[i+1]=a[i]+1;
    }
    else
    {
      a[i+1]=a[i];
    }
  }
  for(int i=0;i<n;i++)
  {
    int l,r;
    cin>>l>>r;
    cout<<a[r]-a[l]<<endl;
  }
  return 0;
}
