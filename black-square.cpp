#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a1,a2,a3,a4,s1=0,s2=0,s3=0,s4=0,t;
  cin>>a1>>a2>>a3>>a4;
  string s;
  cin>>s;
  for(int i=0;i<s.size();i++)
  {
    if(s[i]=='1')
    {
      s1++;
    }
    if(s[i]=='2')
    {
      s2++;
    }
    if(s[i]=='3')
    {
      s3++;
    }
    if(s[i]=='4')
    {
      s4++;
    }
  }
  t=(s1*a1)+(s2*a2)+(s3*a3)+(s4*a4);
  cout<<t<<endl;
  return 0;
}
