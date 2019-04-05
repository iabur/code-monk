#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n];
    int temp = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i] == m)
          temp = i;
    }
    cout << temp+1;
}
