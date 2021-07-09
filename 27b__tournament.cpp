#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<string>
#include<algorithm>
using namespace std;
vector<bool> visited;
vector<int> child[51];
bool dfs(int start,int end)
{ visited[start]=true;
if(start==end)
return true;
for(int i=0;i!=child[start].size();i++)
{   if(!visited[child[start][i]])
    if(dfs(child[start][i],end))
    return true;
}

return false;

}

int main()
{   child[51].clear();
    visited.assign(51,false);
    int n;
    cin>>n;
int x,y;
int count[n+1];
for(int i=0;i<=n;i++)
count[i]=0;
for(int i=0;i<(n*(n-1))/2-1;i++)
{
    cin>>x>>y;
    child[x].push_back(y);
   count[x]++;
   count[y]++;
}
int result[2];
int temp=0;
for(int i=1;i<=n;i++)
{
    if(count[i]==n-2)
    {
       result[temp]=i;
       ++temp;
    }
}


if(dfs(result[1],result[0]))
cout<<result[1]<<" "<<result[0]<<endl;
else
cout<<result[0]<<" "<<result[1]<<endl;
return 0;
}