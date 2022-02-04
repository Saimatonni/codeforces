#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,t;
  cin>>t;
  while(t--)
  {
    int ans=0;
    cin>>n;
    ans=n/2;
    if(n%2==1) ans++;
    cout<<ans<<endl;
  }
  return 0;
}
