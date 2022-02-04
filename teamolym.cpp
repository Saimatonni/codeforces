/*#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,i,x=0,y=0,z=0,t1[100],t2[100],t3[100],s,w;
  cin>>n;
  int a[n];
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  for(i=0;i<n;i++)
  {
    if(a[i]==1)
    {
      t1[x]=i+1;
      x++;
    }
    else if(a[i]==2)
    {
      t2[y]=i+1;
      y++;
    }
    else
    {
      t3[z]=i+1;
      z++;
    }

  }
  s=min(x,y);
  w=min(s,z);
  cout<<w<<endl;
  for(i=0;i<w;i++)
  {
    cout<<t1[i]<<" "<<t2[i]<<" "<<t3[i]<<endl;
  }
  return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,n;
  vector<int>v1,v2,v3;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    cin>>a;
    if(a==1)
    {
      v1.push_back(i);
    }
    else if(a==2)
    {
      v2.push_back(i);
    }
    else
    {
      v3.push_back(i);
    }
  }
  int mn=min(min(v1.size(),v2.size()),v3.size());
  cout<<mn<<endl;
  for(int i=0;i<mn;i++)
  {
    cout<<v1[i]<<" "<<v2[i]<<" "<<v3[i]<<endl;
  }
  return 0;
}
