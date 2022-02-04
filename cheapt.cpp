#include<bits/stdc++.h>
using namespace std;
int main()
{
  int m,n,a,b,x;
  cin>>n>>m>>a>>b;
  if(m*a>b)
  {
    x=(n%m)*a;
    if(x>b)
    {
      printf("%d\n",n/m*b+b);

    }
    else
    {
      printf("%d\n",n/m*b+x);
    }
  }
  else
  {printf("%d\n",n*a);}
  return 0;
}
