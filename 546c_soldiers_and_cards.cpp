#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<deque>

using namespace std;
deque<int> firstplayer;
deque<int> secondplayer;
int main()
{

    int n;
    cin>>n;
    int k1,k2;
    int x,y;
    cin>>k1;
    for(int i=0;i<k1;i++)
      { 
        cin>>x;
        firstplayer.push_front(x);
      }
    cin>>k2;
    for(int i=0;i<k2;i++)
      {
        cin>>y;
        secondplayer.push_front(y);
      }
      int count=0;
      
    while(firstplayer.size()&&secondplayer.size()&&count<1002)
       { 
          if(firstplayer.back()<secondplayer.back())
             {
                 secondplayer.push_front(firstplayer.back());
                 secondplayer.push_front(secondplayer.back());
                 firstplayer.pop_back();
                 secondplayer.pop_back();
             }
         else
             {
                 firstplayer.push_front(secondplayer.back());
                 firstplayer.push_front(firstplayer.back());
                 firstplayer.pop_back();
                 secondplayer.pop_back();
             }
             count++;
       }
    if(count>1000)
    cout<<"-1"<<endl;
    else
        {
            cout<<count<<" ";
            if(firstplayer.size()>0)
            cout<<"1"<<endl;
            else
            cout<<"2"<<endl;
        }
    return 0;
}