#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,n,m,c;
  cin>>t;
  while(t--)
  {
    cin>>n>>m;
    c=m*n;
    if(c%2==0)
    {
      cout<<c/2<<endl;
    }
    else
    {
      cout<<(c/2)+1<<endl;
    }
  }
  return 0;
}
