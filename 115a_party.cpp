#include<iostream>
#include<vector>
using namespace std;

int maxdepth(int a[],int n)
{     int res=0;
   for(int i=1;i<=n;i++)
   {  int x;
      x=i;
    int current=1;
       while( a[x]!=-1)
       {
           current++;
           x=a[x];
           
       }
       res=max(res,current);
   }
   return res;
}

int main()
{
int n;
cin>>n;
int a[2001];

for(int i=0;i<n;i++)
{
cin>>a[i+1];
}
cout<<maxdepth(a,n);
}