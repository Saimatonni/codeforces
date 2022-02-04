#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  cout<<n/2<<endl;
  if(n%2==0)
  {
    for(int i=0;i<n/2-1;i++)
    {
      printf("2 ");
    }
    printf("2\n");
  }
    if(n%2==1)
    {
      for(int i=0;i<n/2-1;i++)
      {
        printf("2 ");
      }
      printf("3\n");
    }
  return 0;

}
