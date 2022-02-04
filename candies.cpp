#include<bits/stdc++.h>
using namespace std;
int main()
{
  int x;
  cin>>x;
  for(int i=0;i<x;i++)
  {
    int n;
    cin>>n;
    for(int i=2;i<10e9;i++)
    {
      int k=pow(2,i)-1;
      if(n%k==0)
      {
        printf("%d\n",n/k);
        break;
      }
    }
  }
  return 0;
}
