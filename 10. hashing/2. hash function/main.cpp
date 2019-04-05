#include<bits/stdc++.h>
using namespace std;
int frequency[26];
int hashfunc(char a)
{
    return (a - 'a');
}
void hashing(string s)
{
    for(int i = 0; i < s.length(); i++)
    {
        int index = hashfunc(s[i]);
        frequency[index]++;
    }
    for(int i = 0; i < 26; i++)
    {
        cout << (char)(i + 'a') << " " << frequency[i] << endl;
    }
}

int main()
{
    string s;
    cin >> s;
    hashing(s);
}
