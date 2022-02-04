#include<bits/stdc++.h>
using namespace std;
int main()
{
  int k,r,i;
  scanf("%d%d",&k,&r);
  for(i=1;;i++)
  if((((k*i)-r)%10==0)||((k*i)%10==0))
  {
    //cnt++;

    printf("%d\n",i);
    //break;
    return 0;
  }
  return 0;
}
