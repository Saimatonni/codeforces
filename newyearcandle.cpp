#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,b,c;
  cin>>a>>b;
  int h=a;
  while(1)
  {
    c=a/b;
    h+=c;
    a=c+(a%b);
    if(a<b)
    {break;}
  }
  cout<<h<<endl;
  return 0;
}
