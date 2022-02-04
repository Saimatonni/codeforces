#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,b,i;
  cin>>a;
  while(a--)
  {
    string b;
    cin>>b;
    int len=b.length();
    if(len==2)
    {cout<<b<<endl;}
    else
    {
      string c;
      c+=b[0];
      c+=b[1];
      for(i=3;i<len;i+=2)
      {
        c+=b[i];
      }
      cout<<c<<endl;
    }
  }
  return 0;
}
