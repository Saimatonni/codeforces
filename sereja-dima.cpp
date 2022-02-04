#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,sum1=0,sum2=0,i;
  cin>>n;
  int a[n];
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  int k=0;
  int l=n-1;
  //int p=a[0];
  //int q=a[n-1];
  for(i=0;i<n;i++)
  {
    if(i%2==0)
    {
      if(a[l]>a[k])
      {
        sum1+=a[l];
        l--;
      }
      else if(a[k]>a[l])
      {
        sum1+=a[k];
        k++;
      }
      else
      {
        sum1+=a[k];

      }
    }
    else
    {
      if(a[l]>a[k])
      {
        sum2+=a[l];
        l--;
      }
      else if(a[k]>a[l])
      {
        sum2+=a[k];
        k++;
      }
      else
      {
        sum2+=a[k];

      }
    }
  }
  cout<<sum1<<" "<<sum2<<endl;
  return 0;
}
