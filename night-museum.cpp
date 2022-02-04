#include<bits/stdc++.h>
using namespace std;
int main()
{
  char s[1000];
  int def,rot=0,f;
  cin>>s;
  f=97;
  for(int i=0;i<strlen(s);i++)
  {
    def=abs(s[i]-f);
    if(def>13)
    {
      def=26-def;
    }
    rot+=def;
    f=s[i];
  }
  cout<<rot<<endl;
  return 0;
}
