#include<iostream>
#include<string>
using namespace std;
 int evaluate(int &i, string &s,int d)
 { int count=0;
 while(i<s.size())
{
i=i+d;
if(s[i]=='1')
{
count++;
continue;
}
else
{
for(int j=i;j>i-d;j--)
{   
    if(s[j]=='1')
    {  
        
        count++;
        i=j;
        break;
        
    }
    if(j==i-d+1&&s[j]=='0')
    return -1;
}

} }
return count;
 }
int main()
{
int n,d;
string s;
cin>>n>>d;
cin>>s;
int count=0;
    int i;
    i=0;
   count=evaluate(i,s,d);
     
if(count==0)
cout<<"-1"<<endl;
else
cout<<count<<endl;
return 0;
}