#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    long long int m,n,r,c,d1,d2,sum1,x,sum2,sum3,sum4;
    cin>>n>>m>>r>>c;
    sum1=abs(r-1)+abs(c-1);
    sum2=abs(r-n)+abs(c-m);
    sum3=abs(r-1)+abs(c-m);
    sum4=abs(r-n)+abs(c-1);
    cout<<max(sum1,max(sum2,max(sum3,sum4)))<<endl;
  }
  return 0;
}
