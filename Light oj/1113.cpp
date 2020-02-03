#include<stdio.h>
#include<iostream>
#include<stack>
using namespace std;
string adress;

int main()
{
    int i,t;
    cin>>t;
    string url;
    stack<string>fo;
    stack<string>ba;

    for(i=1; i<=t; i++)
    {
        cin>>adress;
        url = "http://www.lightoj.com/";

        cout << "Case "<<i<<":\n";
        while(adress!="quit")
        {
            if(adress=="visit")
            {
                ba.push(url);
                cin>>url;
                cout<<url<<"\n";
                while(!fo.empty())
                {
                    fo.pop();
                }

            }

            if(adress=="forward")
            {
                if(fo.empty())
                {
                    printf("ignored\n");
                }
                else
                {
                    ba.push(url);
                    url=fo.top();
                    fo.pop();
                    cout<<url<<"\n";
                }
            }

            if(adress=="back")
            {
                if(ba.empty())
                {
                    printf("Ignored\n");
                }
                else
                {
                    fo.push(url);
                    url=ba.top();
                    ba.pop();
                    cout<<url<<"\n";
                }
            }

            cin>>adress;
        }

    }
    return 0;
}
