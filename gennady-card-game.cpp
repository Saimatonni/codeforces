#include<bits/stdc++.h>
using namespace std;
int main()
{
  int i;
  string s,x;
  cin>>s;
  for(i=0;i<5;i++)
  {
    cin>>x;
    if(x[0]==s[0]||x[1]==s[1])
    {
      cout<<"YES"<<endl;
      return 0;
    }
  }
      cout<<"NO"<<endl;
  
  return 0;
}
