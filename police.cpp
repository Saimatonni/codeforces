#include<bits/stdc++.h>
using namespace std;
int main()
{
  int i,n,a[100],sum=0,cnt=0;
  cin>>n;
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  for(i=0;i<n;i++)
  {
    if(a[i]>0)
    {sum+=a[i];}
    else
    {
      if(sum>0)
      {sum--;}
      else
      {cnt++;}
    }
  }
  cout<<cnt<<endl;
  return 0;
}
