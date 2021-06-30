#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<string>
using namespace std;
int solve(int m)
{ bool flag=true;
int count=0;
map<int,vector<int>> adj_list;
set <pair<int,int>> p;
int x,y;
for(int i=0;i<m;i++)
{
   cin>>x>>y;
   adj_list[x].push_back(y);
   adj_list[y].push_back(x);
}

while(flag)
{   
    flag=false;
for(auto i:adj_list)
{  
   if(adj_list[i.first].size()==1)
   {   
       p.insert({i.first,adj_list[i.first][0]});
     
   }
}
if(p.size()>0)
{ count++;
for(auto i:p)
{  
    
    adj_list[i.first].erase(remove(adj_list[i.first].begin(),adj_list[i.first].end(),i.second),adj_list[i.first].end());
    adj_list[i.second].erase(remove(adj_list[i.second].begin(),adj_list[i.second].end(),i.first),adj_list[i.second].end());
    

flag=true;

}
p.clear();
}

}
return count;
}



int main()
{
    int n,m;
cin>>n>>m;
cout<<solve(m)<<endl;
}