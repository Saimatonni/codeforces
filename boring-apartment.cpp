#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,l;
  int n;
  cin>>t;
  while(t--)
  {
    cin>>n;
    int d=n%10;
    int f=n;
    int cnt=0;
    int ans;
    while(n>0)
    {
      n=n/10;
      cnt++;
    }
    if(cnt==1)
    {
      cout<<(d*10-10)+1<<endl;
    }
    else if(cnt==2)
    {
      cout<<(d*10-10)+3<<endl;
    }
    else if(cnt==3)
    {
      cout<<(d*10-10)+6<<endl;
    }
    else if(cnt==4)
    {
      cout<<(d*10-10)+10<<endl;
    }
    //cout<<ans<<endl;
  }
return 0;
}
