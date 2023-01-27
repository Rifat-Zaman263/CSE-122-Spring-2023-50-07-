#include<iostream>
using namespace std;
int main()
{
 long long n,m,a,land,res;
  cin>>m>>n>>a;
  if (m%a==0)
  {land=m/a;}
  else
  {land=m/a +1;}
  if(n%a==0)
  {res=n/a;}
  else
  {res=n/a +1;}
  cout<<land*res<<endl;
  return 0;

}
