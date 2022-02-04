#include<bits/stdc++.h>
using namespace std;
int main()
{
  int i,n,sum=0;
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  sort(a,a+n);
  for(i=0;i<n;i++)
  {
    sum+=abs(a[n-1]-a[i]);
  }
    printf("%d\n",sum);

  return 0;
}
