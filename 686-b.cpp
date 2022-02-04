#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int t;
  cin>>t;
  while(t--)
  {
    long long int n,cn;
    cin>>n;
    long long int a[n],min=0,p;
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
      if(a[i]==a[i+1])
      {
        //cout<<-1<<endl;
        n-=a[i];
      }
    }
    for(int i=0;i<n;i++)
      {
        if(a[i]!=a[i]&&a[i]<a[min])
        {
          min=i;
          //cn=1;
        }
      }

    if(n==0)
    {
      cout<<-1<<endl;
    }
    else
    {
      cout<<min+1<<endl;
}


}
  return 0;
}
