#include<iostream>
#include<string>
using namespace std;

int main()
{

int t;
cin>>t;
while(t--)
{
string s;
cin>>s;
int countl=0;
int maxcount=0;

for(int i=0;i<s.size();i++)
{ 
  if(s[i]=='L')
  {
      countl++;
  }
  else{
      countl=0;
  }
 
  maxcount=max(maxcount,countl);
}

cout<<maxcount+1<<endl;


}
return 0;
}