#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,ans;
  cin>>t;
  while(t--)
  {
    int h,m;
    cin>>h>>m;
    ans=((24-h)*60)-m;
    cout<<ans<<endl;
  }
}
