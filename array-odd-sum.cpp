#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,sum=0,odd=0,even=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
      if(a[i]%2!=0)
      {
        odd++;
      }
      else
      {
        even++;
      }

        sum+=a[i];
      }
    //  sum+=a[i];

    if(sum%2==1)
    {
      cout<<"YES"<<endl;
    }
    else
    {
      if(odd!=0&& even!=0)
      {
        cout<<"YES"<<endl;
      }
      else
      {
      cout<<"NO"<<endl;
    }
    }
  }
  return 0;
}
