#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y,n,a,t;
cin>>t;
while(t--)
{
cin>>x>>y>>n;
a=n%x;
if((a-y)>=0)
{
  n=n-(a-y);
}
else
{
  n=n-x-(a-y);
}

cout<<n<<endl;
}
return 0;

}
