#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,a[20][20];
  cin>>n;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      a[i][0]=1;
      a[0][j]=1;
    }
  }
  for(int i=1;i<n;i++)
  {
    for(int j=1;j<n;j++)
    {
      a[i][j]=a[i-1][j]+a[i][j-1];
    }
  }
  printf("%d\n",a[n-1][n-1]);
  return 0;
}
