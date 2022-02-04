#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,b,i;
  scanf("%d%d",&a,&b);
  int c[a];
  for(i=0;i<(a-1);i++)
  {
    cin>>c[i];
  }
  for(i=0;i<(a-1);)

  {
    i=i+c[i];
    if(i==(b-1))
    {cout<<"YES"<<endl; return 0;}
  }
  cout<<"NO"<<endl;
  return 0;
}
