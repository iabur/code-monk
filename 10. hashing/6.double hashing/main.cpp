#include<bits/stdc++.h>
using namespace std;

char hashtable[20];
int hashtablesize = 20;

int hashfunc(char a)
{
    return ('a' % hashtablesize);
    //return 'a';
}
int hashfunc2(char a)
{
    return ('a'+1 % hashtablesize);
}
void insert(string s)
{
    for(int i = 0; i < s.length(); i++)
    {
        int index = hashfunc(s[i]);
        int index2 = hashfunc2(s[i]);
        while(hashtable[index] != NULL)
        {
            index = (index + index2) % hashtablesize;
        }
        hashtable[index] = s[i];
    }
}
void search(char a)
{
       int index = hashfunc(a);
       int index2 = hashfunc2(a);
        while(hashtable[index] != a && hashtable[index] != NULL)
        {
            index = (index + index2) % hashtablesize;
        }
        if(hashtable[index] == a)
        {
            cout << "Yes";
        }
        else
        {
            cout << "No";
        }
}

int main()
{
    string s;
    cin >> s;
    insert(s);
    search('p');
}
