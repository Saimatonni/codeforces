#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,ans=0;
  cin>>n;
  string s,b[1001];
  for(int i=0;i<n;i++)
  {
    cin>>s;
    //ans=0;
    if(s[0]=='O'&&s[1]=='O'&&ans==0)
    {
      s[0]='+';
      s[1]='+';
      ans=1;
    }
    else if(s[3]=='O'&&s[4]=='O'&&ans==0)
    {
      s[3]='+';
      s[4]='+';
      ans=1;
    }
    b[i]=s;
  }
  if(ans==1)
  {
    cout<<"YES"<<endl;
    for(int i=0;i<n;i++)
    {
      cout<<b[i]<<endl;
    }
    //cout<<endl;
  }
  else
  {
    cout<<"NO"<<endl;
  }
  return 0;
}
