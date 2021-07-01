#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<string>
using namespace std;
vector<int> child;
vector<bool> visited(200001,false);
map<int,int> mp;
vector<int> temporary;
void solve(int parent)
{ 
  if(!visited[parent])
{
int count=1;
int temp;
temp=parent;
while(child[temp-1]!=parent)
{ temporary.push_back(temp);
  visited[temp]=true;
  count++;
  temp=child[temp-1];
}
for(int i=0;i<temporary.size();i++)
{
  mp[temporary[i]]=count;
}
if(count==1)
{ visited[temp]=true;
  mp[parent]=count;
}
temporary.clear();
}

}




int main()
{
int t;
cin>>t;
while(t--)
{

    int n;
    cin>>n;
    int x;
    for(int i=1;i<=n;i++)
    { 
    cin>>x;
    child.push_back(x);
    }
    for(int i=1;i<=n;i++)
    solve(i);
    for(int i=1;i<=mp.size();i++)
    cout<<mp[i]<<" ";
    cout<<endl;
    mp.clear();
    child.clear();
    visited.assign(200001,false);
}

return 0;


}