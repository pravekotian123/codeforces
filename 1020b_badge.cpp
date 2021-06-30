#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int parent[n+1];
    bool visited[n+1];
    for(int i=1;i<=n;i++)
    cin>>parent[i];
    

    for(int i=1;i<=n;i++)
    {  for(int i=1;i<=n;i++)
       visited[i]=false;
        int temp=i;
        
        while(visited[temp]==false)
        {
           visited[temp]=true;
           temp=parent[temp];

        }
        cout<<temp<<" ";

    }
return 0;
}
  
