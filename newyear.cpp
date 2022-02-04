#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,k;
  while(scanf("%d%d",&n,&k)!=EOF)
  {
  int i,sum=k;
  for(i=0;i<=n;i++)
  {
    sum+=5*i;
    //sum=t+k;
    //count++;
    if(sum>240)
    break;
  }
  printf("%d\n",i-1);
}
  return 0;
}
