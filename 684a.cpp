#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,c1,c2,h,zero=0,one=0;
    long long int cnt=0;
    cin>>n>>c1>>c2>>h;
    string a;
    cin>>a;
    for(int i=0;i<n;i++)
    {
      if(a[i]=='0')
      {
        zero++;
      }
      if(a[i]=='1')
      {
        one++;
      }

    }
    cnt=zero*min(c1,c2+h)+one*min(c2,c1+h);
    printf("%lld\n",cnt);
  }
  return 0;
}
