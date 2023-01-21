
//Codeforces Problem Number:282A
//Codeforces Problem Name: A Bit++



#include<iostream>
#include<string>
using namespace std;
int main()
{
    int A,X=0;
    string s;
    cin>>A;
    for(int i=0; i<A; i++)
    { cin>>s;
    if(s[1]=='+')
    {
       X++ ;
    }
        else
            {
           X-- ;
        }
    }
    cout<<X<<endl;
    return 0;
}

