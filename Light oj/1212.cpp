#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main()
{
    int t,cs=0,n,m,mk;
    cin>>t;
    string st;
    while(t--)
    {
        deque<int>q;
        cin>>n>>m;
        cout<<"Case "<<++cs<<":"<<endl;
        int flag=1;

        for(int i=0; i<=m; i++)
        {
            cin>>st;

                if(st=="pushleft" || st=="pushright")
                {
                    if(flag>n)
                      {
                         cout<<"The queue is full"<<endl;
                      }

                      else
                      {
                          if(st=="pushleft")
                          {
                              cin>>mk;
                              q.push_front(mk);
                              cout<<"Pushed in left: "<<mk<<endl;

                          }
                          else
                          {
                              cin>>mk;
                              q.push_back(mk);
                              cout<<"Pushed in right: "<<mk<<endl;
                          }
                      }

                      flag++;
                }

            else if(st=="popleft")
            {
                if(q.empty())
                    cout<<"The queue is empty"<<endl;
                else
                {
                    cout<<"Popped from left: "<<q.front()<<endl;
                    q.pop_front();
                }
            }
            else if(st=="popright")
            {
                if(q.empty())
                    cout<<"The queue is empty"<<endl;
                else
                {
                    cout<<"Popped from right: "<<q.back()<<endl;
                    q.pop_back();
                }
            }
        }
    }
    return 0;
}
