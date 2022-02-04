#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,t,cnt=0;
  cin>>n>>t;
    for(int i=1;i<=n;i++)
    {
      if(t%i==0&&(t/i)<=n)
      {
        cnt++;
      }
    }
    cout<<cnt<<endl;

  return 0;
}
