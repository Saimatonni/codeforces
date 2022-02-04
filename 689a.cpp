#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,n,k;
  cin>>t;
  string s;
  while(t--)
  {
    cin>>n>>k;
    for(int i=0;i<k;i++)
    {
      cout<<"a";
    }
  s[0]='b';
  for(int j=k;j<n;j++)
  {
    cout<<s[0];
    s[0]=s[0]+1;
    if(s[0]>'c')
    {
      s[0]='a';
    }
  }
  cout<<endl;
}
  return 0;
}
