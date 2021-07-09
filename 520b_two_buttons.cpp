#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
int count=0;
int n,m;
cin>>n>>m;
while(n!=m)
{
    if(m%2==0&&m>n)
    m=m/2;
    else
    m=m+1;
    count++;
}
cout<<count<<endl;

}