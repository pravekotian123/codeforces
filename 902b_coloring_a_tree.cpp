#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<string>
using namespace std;
vector<int> color;
map<int,vector<int>> tree;
//vector<bool> visited(100000,false);
vector<int> counts;
void dfs(int node,int count)
{ 



for(int it=0;it<tree[node].size();it++)
{
if((color[tree[node][it]-1]==color[node-1]))
{   
    count++;
}

counts.push_back(count);
count=0;
}

}
int main()
{ int n;
cin>>n;


int x;
for(int i=2;i<=n;i++)
{  cin>>x;
    tree[x].push_back(i);

}

int y;
for(int i=1;i<=n;i++)
{
    cin>>y;
    color.push_back(y);
    
}
for(int i=1;i<=n;i++)
dfs(i,0);
int sum=0;
for(int i=0;i<counts.size();i++)
{
   sum=sum+counts[i];
}
cout<<n-sum<<endl;


}