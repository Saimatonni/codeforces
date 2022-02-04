#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,n;
  cin>>t;
  while(t--)
  {
    cin>>n;
    int s=0;
    while(s*(s+1)<2*n)
    {
      s++;
    }
    if(s*(s+1)/2==n+1)
    {
      s++;
    }
      cout<<s<<endl;

  }
  return 0;
}
