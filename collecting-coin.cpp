#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
  {
    int a[100],n,d;
    for(int i=0;i<3;i++)
    {
      cin>>a[i];
      //cin>>n;
    }
    cin>>n;
    sort(a,a+3);


      d=a[2]-a[0];
      d+=a[2]-a[1];
      if(n>=d)
      {
        n-=d;
        if(n%3==0)
        {
          cout<<"YES"<<endl;
        }
        else
        {
          cout<<"NO"<<endl;
        }
      }
      else
      {
        cout<<"NO"<<endl;
      }

  }
  return 0;
}
