#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int n,t;
  cin>>t;
  while(t--)
  {
    cin>>n;
    if(n==1)
    {
      cout<<0<<endl;
    }
    else
    {
      long long int m=3,s=1,ans=0;
      for(int i=0;i<n/2;i++)
      {
        ans+=(m+m+(m-2)+(m-2))*s;
        m+=2;
        s++;
      }

    cout<<ans<<endl;
  }
  }
  return 0;
}
