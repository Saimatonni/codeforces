#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,n[100],i,a;
  scanf("%d",&t);
  for(i=0;i<t;i++)
  {
    scanf("%d",&n[i]);
  }
  for(i=0;i<t;i++)
  {
    while(n[i])
    {
    if((((((n[i]/2)==0)/2)==0)&&(((((n[i+1]/2)==1)/2)==1)))>0)
    {
      printf("YES\n");
      printf("%d",n[i]);
      break;
    }
    else
    printf("NO\n");
    break;
  }
}
return 0;
}
