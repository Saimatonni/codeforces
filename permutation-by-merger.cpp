#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,x,n;
  cin>>t;
  while(t--)
  {
    int m[51]={0};
    cin>>x;
    for(int i=0;i<2*x;i++)
    {
      cin>>n;
      if(m[n]==0)
      {
        printf("%d ",n);
        m[n]++;
      }
    }
    printf("\n");
  }
}
