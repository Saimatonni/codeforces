#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long i,x,t,p,q,s,m,n;
  cin>>t;
  while(t--)
  {
    cin>>x;
    int a[x],b[x];
    p=10e9,q=10e9;
    for(i=0;i<x;i++)
    {
      cin>>a[i];
      if(a[i]<p) p=a[i];
    }
    for(i=0;i<x;i++)
    {
      cin>>b[i];
      if(b[i]<q) q=b[i];
    }
    s=0;
    for(i=0;i<x;i++)
    {
      if(a[i]>p&&b[i]>q)
      {
        n=a[i]-p; m=b[i]-q;
        if(n<=m) s=s+n+(m-n);
        else s=s+m+(n-m);
      }
      else if(a[i]>p) s=s+a[i]-p;
      else if(b[i]>q) s=s+b[i]-q;
    }
    cout<<s<<endl;
  }
  return 0;
}
