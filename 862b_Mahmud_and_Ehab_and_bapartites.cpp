#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<set>
#include<map>
using namespace std;
set<int> set1,set2;
vector<int,vector<int>> adj_list;
vector<bool> visited(100001,false);
int solve(int src,int count)
{ if(visited[src])
return count;
count++;
if(count%2==1)
set1.insert(src);
else
set2.insert(src);
visited[src]=true;
for(auto it:adj_list[src])
{
   solve(it,count);
}

}

int main()
{
int n;
cin>>n;



int x,y;

for(int i=0;i<n-1;i++)
{ 
    cin>>x>>y;
    adj_list[x].push_back(y);
    adj_list[y].push_back(x);

}


solve(adj_list.begin()->first,0);

cout<<set1.size()*set2.size()-(n-1)<<endl;
return 0;
}