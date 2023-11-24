#include <bits/stdc++.h>

using namespace std;

int main ()

{
  int a,b;
  cin>>a>>b;
  int mn=min(a,b);
  int mx=max(a,b);
  swap(a,b);
  cout<<mn<<endl<<mx<<endl<<a<<" "<<b<<endl;


    return 0;
}