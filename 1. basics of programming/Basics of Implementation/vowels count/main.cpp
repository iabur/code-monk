#include<bits/stdc++.h>
using namespace std;
int a, e, i, o, u;
int main()
{
    string s;
    cin >> s;

    int s_length = s.length();

    for (int i = 0; i < s_length; i++)
    {
        cout << s[i] << endl;
        if(s[i] == 'a')
            a++;
        else if(s[i] == 'e')
            e++;
        else if(s[i] == 'i')
            i++;
        else if(s[i] = 'o')
            o++;
        else if(s[i] == 'u')
            u++;

    }
    cout << "a = " << a << " e = " << e<< " i = " << i<< " o = " << o<< " u = " << u;
    return 0;
}
