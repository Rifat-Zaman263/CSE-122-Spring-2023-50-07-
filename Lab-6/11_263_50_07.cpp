//Problem Number: Codeforces 118A
//problem Name: String Task



#include<iostream>
#include<string>
using namespace std;
int main()
{
  string s;
  cin>>s;
  //int a=s.length();
  for(int i=0;i<s.size();i++)
  {
     s[i]=tolower(s[i]);
     if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y')
     {
        continue;
     }
     else
    {
       cout<<"."<<s[i];
     }

  }
 return 0;
}
