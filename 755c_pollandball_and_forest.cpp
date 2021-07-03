#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<string>

using namespace std;

vector<int> adj_list[10001];
vector <bool> visited(10001,false);
void dfs(int src,int &count)
{
if(visited[src])
return;
count++;
visited[src]=true;
for(auto i:adj_list[src])
{   if(!visited[i])
{    count--;
    
    dfs(i,count);
}
}


}

int main()
{

int n;
cin>>n;

int x;
for(int i=0;i<n;i++)
{
    cin>>x;
    adj_list[x].push_back(i+1);
    adj_list[i+1].push_back(x);
  
}
int count=0;

for(int i=1;i<=n;i++)
{
dfs(i,count);
}
cout<<count<<endl;


}