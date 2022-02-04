#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m,i,j,sum=0;
  cin>>n;
  int a[n];
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  sort(a,a+n);
  cin>>m;
  int b[m];
  for(j=0;j<m;j++)
  {
    cin>>b[j];
  }
  sort(b,b+m);
  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
      if(abs(a[i]-b[j])<=1)
      {
        sum++;
        b[j]=1000;
        break;
      }
    }
  }
  cout<<sum<<endl;
  return 0;
}
