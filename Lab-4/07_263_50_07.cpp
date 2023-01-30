
//codeforces poblem Number: 263A
//Problem Name:  Beautiful Matrix


#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int i,j,result=0;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
           cin>>result;
           if(result==1)
           {
            cout<<abs(i-3)+abs(j-3)<<endl;
           }
        }
    }
    return 0;
}
