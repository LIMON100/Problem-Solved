#include<bits/stdc++.h>
using namespace std;
char str[1000][50];
struct Trie
{
    int id;
    int v;
    Trie *p[26];
    Trie()
    {
        v=0;
        int i;
        id=-1;
        for(i=0; i<26; i++)p[i]=NULL;
    }
};
Trie* root;
int cnt;

void createTrie(char *s)
{
    int i;
    Trie *r=root;
    int l=strlen(s);
    for(i=0; i<l; i++)
    {
        r->v++;
        cout<<r->v++<<endl;
        if(r->p[s[i]-'a']==NULL)
        {
            r->p[s[i]-'a']=new Trie();
        }
        r=r->p[s[i]-'a'];
    }

    if(r->id==-1)
    {
        r->id=cnt;
        r->v++;
        cnt++;
    }
}

void findTrie(char *s)
{
    int i;
    Trie *r=root;
    int l=strlen(s);
    for(i=0; i<l; i++)
    {
        r=r->p[s[i]-'a'];

        if(r->v==1)
        {
            for(int j=0; j<=i; j++)
            {
                cout<<s[j];
            }
            cout<<endl;
            return;
        }
    }
    cout<<s<<endl;
}

int main()
{
    int n,i,t=0;
    while(scanf("%s",str[0])!=EOF)
    {
        t=1;
        cnt=1;
        root=new Trie();
        createTrie(str[0]);

        while(scanf("%s",str[t])!=EOF)
        {
            createTrie(str[t]);
            t++;
        }

        for(i=0; i<t; i++)
        {
            cout<<str[i]<<" ";
            findTrie(str[i]);
        }
    }
    return 0;
}
