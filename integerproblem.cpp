#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,a,b,c;
  cin>>t;
  while(t--)
  {
    cin>>a>>b;
    c=(abs(a-b)+9)/10;
    cout<<c<<endl;
  }
  return 0;
}
