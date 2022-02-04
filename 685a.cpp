#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,n;
  cin>>t;
  for(int i=0;i<t;i++)
  {
    cin>>n;
    int sum1=0,sum2=0,sum;
      for(int i=n-1;i>1;i--)
      {
        while(n%i==0)
        {


          n=n/i;
          sum1++;

        /*else
        {
          n-=1;
          sum2++;
        }*/
      }

}
while(n>1)
{
  n-=1;
  sum2++;
}

sum=sum1+sum2;
cout<<sum<<endl;
}

  return 0;
}
