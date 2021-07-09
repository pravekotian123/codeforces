#include<iostream>
#include<vector>
using namespace std;
vector<int> languages[10000];
vector<int>visited;
bool dfs(int src)
{  
    if(visited[src])
    return false;
    if(languages[src].size()==0)
    return false;
    visited[src]=true;
    for(int i=0;i<languages[src].size();i++)
    {
        if(!visited[languages[src][i]])
        {
          dfs(languages[src][i]);
        }
    }
     
    return true;
}
int main()
{
    visited.assign(10000,false);
    languages[10000].clear();
int m,n;
cin>>n>>m;
int x,y;
int count=0;
for(int i=1;i<=n;i++)
{
     cin>>x;
     if(x==0)
         {
          count++;
          continue;
         }
     for(int j=1;j<=x;j++)
         {
             cin>>y;
             languages[y].push_back(n+i);
             languages[n+i].push_back(y);
         }
}
int result=0;
for(int i=1;i<=n;i++)
{
   result=result+dfs(i);
   
}
if(result>0)
cout<<result-1+count<<endl;
else
cout<<count<<endl;
}