#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,n,i,j;
  cin>>t;
  while(t--)
  {
    int n,v;
    cin>>n;
    v=n;
    int p[n+10];
    for(int i=0;i<n;i++)
    {
      p[i]=v;
      v=v-1;
    }
    if(n%2==1)
    {
      swap(p[(n/2)],p[n-1]);
    }
    for(int i=0;i<n;i++)
    {
      cout<<p[i]<<" ";
    }
    cout<<endl;
}
  return 0;
}
