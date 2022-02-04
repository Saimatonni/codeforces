#include<bits/stdc++.h>
using namespace std;
int main()
{
  int arr[100],a,b,c,i;
  for(i=0;i<4;i++)
  {
    scanf("%d",&arr[i]);
  }
  sort(arr,arr+4);
  for(i=0;i<4;i++)
  {
    a=arr[3]-arr[0];
    b=arr[3]-arr[2];
    c=arr[3]-arr[1];
  }
  printf("%d %d %d\n",a,b,c);
  return 0;
}
