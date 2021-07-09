#include<iostream>
#include<set>
#include<vector>
using namespace std;
set<pair<int,long long int>>s;
int main()
{ int n;
cin>>n;
long long int a[n];

for(int i=0;i<n;i++)
{
    cin>>a[i];
}
long long int temp;
int count=0;
for(int i=0;i<n;i++)
{ temp=a[i];
    while(temp)
    {
        if(temp%3==0)
        {
            count++;
        }
        else
        break;
        temp=temp/3;
       
    }
     
    s.insert({-count,a[i]});
    count=0;
}
for(auto i:s)
cout<<i.second<<" ";
cout<<endl;
return 0;
}