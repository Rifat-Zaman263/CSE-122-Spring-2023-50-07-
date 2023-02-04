
//Experiment Number:Codeforces 339A.
//Experiment name:Helpful Maths


#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int i,j;
    for(i=0;i<str.size();i+=2)
    {
        for(j=0;j<str.size()-1;j+=2)
        {
            if(str[j]>str[j+2])
            {
                swap(str[j],str[j+2]);
            }
        }
    }
    cout<<str<<endl;
    return 0;
}
