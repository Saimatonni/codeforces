/*#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,sum=0;
  cin>>n;
  while(n>=1)
  {
    if(n%2==1)
    {
      sum++;
    }
    else
    {
      n=n/2;
    }
  }
  //cout<<sum+1<<endl;
  printf("%d\n",sum+1);
  return 0;
}
*/
#include <bits/stdc++.h>

using namespace std;
int main()
{
    long long int n,i,x=0;
    scanf("%lld",&n);
    while(n>=1){
        if(n%2==1){
            x++;
            n--;
        }
        else{
            n/=2;
        }
    }
    printf("%lld\n",x);
    return 0;
}
