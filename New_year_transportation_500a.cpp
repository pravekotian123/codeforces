#include<iostream>
#include<vector>
using namespace std;

int main()
{

int n,t;
cin>>n>>t;
int a[n+1];
int parent[n+1];
for(int i=1;i<n;i++)
{
    cin>>a[i];
    parent[i]=i+a[i];
}

int temp=1;
while(temp<t)
{
    if(parent[temp]==t)
    {
    cout<<"YES"<<endl;
    return 0;
    }
    temp=parent[temp];
}
cout<<"NO"<<endl;
return 0;


}