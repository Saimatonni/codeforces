#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,a[100],b[100],c[100],i;
  cin>>n;
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  sort(a,a+n);
  for(i=0;i<n-1;i++)
  {
    cin>>b[i];
  }
  sort(b,b+n-1);
  for(i=0;i<n-2;i++)
  {
    cin>>c[i];
  }
  sort(c,c+n-2);
  //for(i=0;i<n;i++
  if(a[i]!=b[i]&&b[i]!=c[i])
  {
    cout<<b[i]<<endl<<c[i]<<endl;
  }

  return 0;
}
/*#include <iostream>
using namespace std;

int main()
{
    int n, t;
    cin >> n;
    int a = 0, b = 0, c = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> t;
        a += t;
    }

    for (int i = 0; i < n - 1; i++)
    {
        cin >> t;
        b += t;
    }

    for (int i = 0; i < n - 2; i++)
    {
        cin >> t;
        c += t;
    }

    cout << a - b << endl;
    cout << b - c << endl;
    return 0;
}*/
