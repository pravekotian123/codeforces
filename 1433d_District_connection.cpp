#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<set>
#include<string>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
map<int,vector<int>> mp;
set<int> s;
int x;
for(int i=1;i<=n;i++)
{
cin>>x;
mp[x].push_back(i);
s.insert(x);
}
if(s.size()==1)
{
    cout<<"NO"<<endl;
   continue;
}
cout<<"YES"<<endl;
int temp,temp_next;
auto i=s.begin();
temp=*i;
++i;
temp_next=*i;
while(i!=s.end())
    {  for(int j=0;j<mp[*i].size();j++)
       cout<<mp[temp][0]<<" "<<mp[*i][j]<<endl;
       if(temp_next==*i)
       {  --i;
          if(mp[*i].size()>1)
          {
           for(int j=1;j<mp[*i].size();j++)
           cout<<mp[temp_next][0]<<" "<<mp[*i][j]<<endl;
           
          }
          ++i;
       }
       ++i;
   
    }

}
return 0;
}