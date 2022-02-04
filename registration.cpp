#include<bits/stdc++.h>
#include<map>
using namespace std;
int main()
{
  int n,i;
  string s;
  map<string,int>user;
  cin>>n;
  for(i=0;i<n;i++)
  {
    cin>>s;
    if(user[s]==0)
    {
      cout<<"OK"<<endl;
      user[s]=1;
    }
    else
    {
    cout<<s<<user[s]<<endl;
    user[s]++;
  }
}
return 0;
}
