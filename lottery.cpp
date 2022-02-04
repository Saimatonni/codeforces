#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,ans=0,temp;
  scanf("%d",&n);
  if(n>=100)
  {
    temp=n/100;
    ans+=temp;
    n-=(temp*100);
  }
  if(n>=20)
  {
    temp=n/20;
    ans+=temp;
    n-=(temp*20);
  }
  if(n>=10)
  {
    temp=n/10;
    ans+=temp;
    n-=(temp*10);
  }
  if(n>=5)
  {
    temp=n/5;
    ans+=temp;
    n-=(temp*5);
  }
  if(n>=1)
  {
    temp=n/1;
    ans+=temp;
    n-=(temp*1);
  }
  printf("%d\n",ans);
  return 0;
}
