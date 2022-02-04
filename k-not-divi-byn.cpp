#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int t,n,k,f;
  cin>>t;
  while(t--)
  {
    cin>>n>>k;
    int x=(k-1)/(n-1);
    cout<<k+x<<endl;
  }
  return 0;
}
