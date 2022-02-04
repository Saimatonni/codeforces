#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
  {
    int a,b;
    cin>>a>>b;
    int a1[a],a2[a],sum=0;
    for(int i=0;i<a;i++)
    {
      cin>>a1[i];
      sum+=a1[i];
    }
    for(int i=0;i<a;i++)
    {
      cin>>a2[i];
    }
    sort(a1,a1+a);
    sort(a2,a2+a);
    reverse(a2,a2+a);
    int k=0;
    for(int i=0;i<a;i++)
    {
      if(a1[i]<a2[i])
      {
        swap(a1[i],a2[i]);
        k++;
        if(k==b) break;
      }
    }
    int sum1=0;
    for(int i=0;i<a;i++)
    {
      sum1+=a1[i];
    }
    if(b==0) cout<<sum<<endl;
    else cout<<sum1<<endl;
  }
  return 0;
}
