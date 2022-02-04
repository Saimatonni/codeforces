#include<bits/stdc++.h>
using namespace std;
int main()
{
  int i,mino,arr[10],maxo,tot;
  for(i=0;i<3;i++)
  {
    scanf("%d",&arr[i]);
  }
  sort(arr,arr+3);
  for(i=0;i<3;i++)
  {
    mino=abs(arr[1]-arr[0]);
    maxo=abs(arr[1]-arr[2]);
    tot=mino+maxo;
    cout<<tot<<endl;
    return 0;
  }
  return 0;
}
