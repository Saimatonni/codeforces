#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;

  while(t--)
  {
    int n,f,i,j,a;
    set<int>sum;
    cin>>n;
    //int a[i];
    for(i=0;i<n;i++)
    {
      cin>>a;
      sum.insert(a);
    }


    cout<<sum.size()<<endl;
  }
  return 0;
}
