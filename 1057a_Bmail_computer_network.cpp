#include<iostream>
#include<vector>
using namespace std;
int main()
{

int n;
cin>>n;
int parent[n+1];
vector <int> router;
for(int i=2;i<=n;i++)
{
    cin>>parent[i];
}
int temp;
temp=n;
while(temp!=1)
{
    router.push_back(temp);
    temp=parent[temp];
}
router.push_back(1);
for(int i=router.size()-1;i>=0;i--)
cout<<router[i]<<" ";
return 0;
}