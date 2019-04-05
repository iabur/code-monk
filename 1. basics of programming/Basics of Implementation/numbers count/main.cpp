#include<bits/stdc++.h>
using namespace std;
int arr[10];

int main()
{
    string s;
    cin >> s;
    int s_length = s.length();
    for (int i = 0; i < s_length; i++)
    {
        if( s[i] == '0')
        {
            arr[0] = arr[0] + 1;
        }
        else if(s[i] == '1')
        {
            arr[1] = arr[1] + 1;
        }
        else if(s[i] =='2')
        {
            arr[2] = arr[2] + 1;
        }
        else if(s[i] == '3')
        {
            arr[3] = arr[3] + 1;
        }
        else if(s[i] == '4')
        {
            arr[4] = arr[4] + 1;
        }
        else if(s[i] == '5')
        {
            arr[5] = arr[5] + 1;
        }
        else if(s[i] == '6')
        {
            arr[6] = arr[6] + 1;
        }
        else if(s[i] == '8')
        {
            arr[8] = arr[8] + 1;
        }
        else if(s[i] == '9')
        {
            arr[9] = arr[9] + 1;
        }
        else if(s[i] == '7')
        {
            arr[7] = arr[7] + 1;
        }
    }
    for (int i = 0; i <= 9; i ++)
    {
        cout <<i << " " <<  arr[i] << endl;
    }
}
