//codeforces problem:112A
//problem name:Petya & string


#include<iostream>
#include<string>
using namespace std;
int main()
{
 int i;
 string A,B;
 cin>>A>>B;
 for(i=0;i<A.size();i++)
 {
     A[i]=towlower(A[i]);
     B[i]=towlower(B[i]);
 }
 if(A==B)
 {
     cout<<"0"<<endl;
 }
 else
 {
     for(i=0;i<A.size();i++)
        { if(A[i]>B[i])
        {
            cout<<"1"<<endl;
            break;
        }
        if(A[i]<B[i])
        {
            cout<<"-1"<<endl;
            break;
        }
        }
 }
    return 0;
}

