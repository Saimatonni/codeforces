#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,k,i,sum=0;
  scanf("%d%d",&n,&k);
  int a[n];
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
{
  if((5-a[i])>=k)
  {
    sum++;
  }
}
printf("%d\n",sum/3);
return 0;
}
