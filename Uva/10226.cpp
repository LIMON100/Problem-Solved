#include<bits/stdc++.h>
using namespace std;

map<string,int>mp;

map<string,int>::iterator it;

int main()

    {

        int tc;
        int count;

        scanf("%d\n",&tc);

        while(tc--)
        {

            count=0;

           string str;

            while(1)
            {
                getline(cin,str);
                if(str[0]=='\0')
                    break;

                mp[str]++;

                count++;

            }

            if(mp.size()>0)
            {

                for(it=mp.begin();it!=mp.end();it++){

                    cout<<it->first<< " ";
                    cout << setprecision(4) <<fixed<< ((double)it->second/count)*100.00<<endl;
                }

            }

            if(tc>0)printf("\n");

            mp.clear();

        }
        return 0;

    }
