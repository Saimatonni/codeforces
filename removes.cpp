#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,n,i,j,k,f=0;
cin>>k;
while(k--)
{
  cin>>a;
  int n[a];
  for(i=0;i<a;i++)
  {
    cin>>n[i];
  }
  sort(n,a+n);
  f=0;
  for(i=1;i<a;i++)
  if(n[i]-n[i-1]>1)
  {
    f=1;
    break;
  }
  if(f==0)
  {cout<<"YES\n";}
  else
  {cout<<"NO\n";}
}
return 0;
}
