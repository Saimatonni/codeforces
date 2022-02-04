#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int c[n],a=0,b=0;
    for(int i=0;i<n;i++)
    {
      cin>>c[i];
      if(c[i]%2!=i%2)
      {
        if(i%2==0)
        {
          a++;
        }
        else{
          b++;
        }
      }
    }
    if(a!=b)
    {cout<<-1<<endl;}
    else
    {cout<<a<<endl;}
  }
  return 0;
}
