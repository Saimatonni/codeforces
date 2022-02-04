#include<stdio.h>
void swap(int *sp,int *xp)
{
  int temp;
  temp=*sp;
  *sp=*xp;
  *xp=temp;
}

int main()
{
  int i,j,s,n,a[100],b[100],cnt=0;
  scanf("%d%d",&s,&n);
  for(i=0;i<n;i++)
  {
    scanf("%d%d",&a[i],&b[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<n-1;j++)
    {
      if(a[j]>a[j+1])
      {
        swap(a[j],a[j+1]);
        swap(b[j],b[j+1]);
      }
    }
  }
  for(i=0;i<n;i++)
  {
    if(s>a[i])
    {
      cnt++;
    }
    s+=b[i];
  }
  if(cnt==n)
    {
      printf("YES\n");
    }
  else
  {
  printf("NO\n");
}
  return 0;
}
/*#include <bits/stdc++.h>

using namespace std;

int main()
{
    int s,n,x,y,i,cnt=0,a[1000],b[1000],j;
    scanf("%d%d",&s,&n);
    for(i=0; i<n; i++)
    {
        scanf("%d%d",&x,&y);
        a[i]=x;
        b[i]=y;
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                swap(b[j],b[j+1]);
            }
        }
    }
    for(i=0; i<n; i++)
    {
        if(s>a[i])
        {
            cnt++;
        }
        s+=b[i];
    }
    if(cnt==n)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}*/
