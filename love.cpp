#include<stdio.h>
int main()
{
  int i,n,arr[100],max,min,cnt=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
    max=min=arr[0];
  }
  for(i=0;i<n;i++)
  {
    if(max<arr[i])
    {
      max=arr[i];
      cnt++;
    }
     else if(min>arr[i])
    {
      min=arr[i];
      cnt++;
    }
  }
  printf("%d\n",cnt);
  return 0;
}
