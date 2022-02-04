#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,t;
  cin>>t;
  string s;
  while(t--)
  {
    int ans=0,bal=0;
    cin>>n>>s;
    for(int i=0;i<n;i++)
    {
      if(s[i]=='(')
      {
        bal++;
      }
      else
      {
        bal--;
        if(bal<0)
        {
          bal=0;
          ans++;
        }
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}
