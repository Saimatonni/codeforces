#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int x,n,m;
    cin>>x>>n>>m;
     while(x>20&&n--)
     {
        //n--;
        x=(x/2)+10;


    }
    while(x>0&&m--)
  {
    //m--;
        x=x-10;


    }
    if(x<=0)
    {
      cout<<"YES"<<endl;
    }
    else
    {
      cout<<"NO"<<endl;
    }

  }
  return 0;
}
