#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,n;
  cin>>t;
  while(t--)
  {
    cin>>n;
    int c2=0,c3=0;
    while(n%2==0)
    {
      n=n/2;
      c2++;
    }
    while(n%3==0)
    {
      n=n/3;
      c3++;
    }
    if(n==1&&c2<=c3)
    {
      cout<<(c3-c2)+c3<<endl;
    }
    else
    {
      cout<<-1<<endl;
    }
  }
  return 0;
}
