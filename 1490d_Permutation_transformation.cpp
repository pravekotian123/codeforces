#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<map>

using namespace std;
int depth[101];

void solve(int a[],int l,int r,int count)
{
 int maximum_value=-1;
 int max_index;
 

 if(l>r)
 return;
 for(int i=l;i<=r;i++)
 {
     maximum_value=max(maximum_value,a[i]);
     if(a[i]==maximum_value)
     {
         max_index=i;
     }
 }
 depth[max_index]=count;
 count++;
 

 solve(a,l,max_index-1,count);
 solve(a,max_index+1,r,count);
}

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
   solve(a,0,n-1,0);
  for(int i=0;i<n;i++)
  cout<<depth[i]<<" ";
  cout<<endl;
  }


return 0;
}