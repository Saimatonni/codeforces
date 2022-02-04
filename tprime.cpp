#include<bits/stdc++.h>
using namespace std;
bool p(long long n)
{
  int skip=0;
  if(n<2)
  {return false;}
  else if(n==2)
  {return true;}
  long long l=sqrt(n);
  if(n%2==0)
  {
    return false;
    for(int i=3;i<=l;i+=2)
    {
      if(n%i==0)
      {
        return false;
      }
    }
  }
  return true;
}
int main()
{
  long long num;
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
  {
    cin>>num;
    long long s=sqrt(num);
    if(s*s==num&&p(s)==true)
    {cout<<"YES"<<endl;}
    else
    {cout<<"NO"<<endl;}
  }
  return 0;
}
