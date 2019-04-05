#include<bits/stdc++.h>
using namespace std;

vector <char> hashtable[20];
int hashtablesize = 20;

int hashfunc(char a)
{
    return ('a' % hashtablesize);
    //return 'a';
}
void insert(string s)
{
    for(int i = 0; i < s.length(); i++)
    {
        int index = hashfunc(s[i]);
        hashtable[index].push_back(s[i]);
    }
}
void search(char a)
{
    int index = hashfunc(a);
    for(int i = 0; i < hashtable[index].size(); i++)
    {
        if(hashtable[index][i] == a)
        {
            cout << "Yes";
            return;
        }

    }
    cout << "No";
}

int main()
{
    string s;
    cin >> s;
    insert(s);
    search('p');
}
