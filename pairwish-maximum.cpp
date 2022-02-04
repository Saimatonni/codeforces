#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,a[3];
  cin>>t;
  while(t--)
  {
    for(int i=0;i<3;i++)
    {
      cin>>a[i];
    }
    sort(a,a+3);
    //for(int i=0;i<3;i++)

    if(a[1]!=a[2])
    {
      cout<<"NO"<<endl;
      //return 0;
    }
    else
    {
      cout<<"YES"<<endl;
      cout<<a[0]<<" "<<a[0]<<" "<<a[2]<<endl;
      //return 0;
    }
  }

  return 0;
}
