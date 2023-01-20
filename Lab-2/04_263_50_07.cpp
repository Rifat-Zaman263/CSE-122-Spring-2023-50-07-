#include<iostream>
using namespace std;
int main()
{
    int n,i,j,Count=0;
   cin>>n>>j;
   int x[100];
   for(i=0;i<n;i++)
   {
     cin>>x[i];

   }
    for(i=0;i<n;i++)
    {
        if(x[i]>0 && x[i]>=x[j-1])
        Count++;}
   cout<<Count++;
return 0;
}
