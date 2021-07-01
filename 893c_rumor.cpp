#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#include<string>
using namespace std;
map<int,vector<int>> friends;
vector<bool>visited(100000,false);
vector <int> cost;
vector< int> totalcost;
int mincost;
int solve(int src,int tempcost)
{   if(friends[src].size()==0)
   {
    
     return tempcost;
   }
    
    if(visited[src]==true)
    return 0;
    visited[src]=true;
   
    mincost=min(tempcost,mincost);
    
for(int i=0;i<friends[src].size();i++)
{   
    solve(friends[src][i],cost[friends[src][i]-1]);
    
}


return mincost;
}

int main()
{
    int n,m;
    cin>>n>>m;
    int x,y;
    for(int i=1;i<=n;i++)
    { 
    cin>>x;
    cost.push_back(x);
    }
    
    for(int i=0;i<m;i++)
    {   cin>>x>>y;
        friends[x].push_back(y);
        friends[y].push_back(x);
    }
for(int i=1;i<=n;i++)
{ mincost=cost[i-1];
 totalcost.push_back( solve(i,cost[i-1]));
}
long long int sum=0;
for(int i=0;i<totalcost.size();i++)
{
    sum=sum+totalcost[i];
}
cout<<sum<<endl;
}