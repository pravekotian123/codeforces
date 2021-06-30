#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
 int t;
 cin>>t;
 while(t--)
 {
  int n,m;
  cin>>n>>m;
  int a[n+1];
  int b[m+1];
  vector<bool> check_sort(n+1);
  check_sort.assign(check_sort.size(),false);
  int temp;
  bool flag=false;
  for(int i=1;i<=n;i++)
  cin>>a[i];

  for(int i=1;i<=m;i++)
  {
  cin>>b[i];
  check_sort[b[i]]=true;
  }
  
  for(int i=1;i<n;i++)
  {
      for(int j=1;j<n;j++)
      {    
         if(a[j]>a[j+1])
         {  
             if(check_sort[j]==true)
             {
                 temp=a[j+1];
                 a[j+1]=a[j];
                 a[j]=temp;
             }
             else
             {
                 cout<<"NO"<<endl;
                 i=n;
                 j=n;
                 flag=true;
             }
         }

      }
      
  }
  
 if(flag==false)
 cout<<"YES"<<endl;
 }

return 0;
}