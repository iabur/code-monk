#include<bits/stdc++.h>
using namespace std;

char hashtable[20];
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
        int h = 1;
        while(hashtable[index] != NULL)
        {
            index = (index + h*h) % hashtablesize;\
            h++;
        }
        hashtable[index] = s[i];
    }
}
void search(char a)
{
       int index = hashfunc(a);
        int h = 1;
        while(hashtable[index] != a && hashtable[index] != NULL)
        {
            index = (index + h*h) % hashtablesize;
            h++;
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
